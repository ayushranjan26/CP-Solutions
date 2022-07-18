/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define rloop(i,a,b) for(int i=(a);i>(b);i--)
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
 
ll GCD(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}
 
void solve()
{
    ll i,j,k,n,d,l,r,s;
    cin>>n>>l>>r>>s;
 
    d=r-l+1;
    if(s<(d*(d+1))/2){
        cout<<"-1";
        return;
    }
    if(s>(n*(n+1))/2-((n-d)*(n+1-d))/2){
        cout<<"-1";
        return;
    }
 
    vector<ll> v;
    ll sum=0;
    for(i=0;i<r-l+1;i++){
        v.push_back(i+1);
        sum+=i+1;
    }
    k=0;
    for(i=v.size()-1;i>=0;i--){
        if(sum>=s){
            break;
        }
        d=v[i];
        for(j=d+1;j<=n-k;j++){
            if(sum>=s){
                break;
            }
            sum++;
            v[i]=j;
        }
        if(sum>=s){
            break;
        }
       // cout<<i<<" ";
        k++;
    }
    set<ll> st;
    for(i=1;i<=n;i++){
        st.insert(i);
    }
 
    for(i=0;i<v.size();i++){
        st.erase(v[i]);
    }
    ll ans[n]={0};
    l--,r--;
    for(i=0;i<n;i++){
        if(i>=l&&i<=r){
            ans[i]=v.back();
            v.pop_back();
        }
        else{
            ans[i]=*st.begin();
            st.erase(st.begin());
        }
    }
    for(i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return ;
}
int main()
 
{
    //IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
       cout<<"\n";
    }
    return 0;
}