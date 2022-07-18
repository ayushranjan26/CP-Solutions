#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll const INF =1e18;
ll M =1000000007;
 
void solve()
{
    int i,j,l,k,n;
    string t,s;
    cin>>s>>t>>k;
    n=s.size();
 
    ll pre[n+1]={0};
    for(i=0;i<n;i++){
        if(t[(int)s[i]-(int)'a']=='0'){
            pre[i+1]=1;
        }
    }
    for(i=0;i<n;i++){
        pre[i+1]+=pre[i];
    }
 
    ll ans=0;
 
    int p=31,mod=1e9+9;
    ll p_pow[n];
    p_pow[0]=1;
    for(i=1;i<n;i++)
        p_pow[i]=(p_pow[i-1]*p)%mod;
    ll h[n+1]={0};
    for(i=0;i<n;i++)
        h[i+1]=(h[i]+(s[i]-'a'+1)*p_pow[i])%mod;
    for(l=1;l<=n;l++){
        set<ll> st;
        for(i=0;i<=n-l;i++){
            ll h1=(h[i+l]-h[i]+mod)%mod;
            h1=(h1*p_pow[n-i-1])%mod;
            if(pre[i+l]-pre[i]<=k){
                st.insert(h1);
            }
        }
        ans+=st.size();
    }
    cout<<ans;
    return;
}
 
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}