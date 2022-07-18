/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define rloop(i,a,b) for(int i=(a);i>(b);i--)
#define ft first
#define sd second
ll const INF =1e18;
using namespace std;
 
void solve()
{
    ll i,j,k,q,n,m,a,b,c,y,x,z;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    vector<ll> pr(n),po(n);
    j=0;
    for(i=0;i<n;i++){
        if(s[i]==t[j]){
            j++;
            j=min(j,m);
        }
        pr[i]=j;
    }
    j=m-1;
    for(i=n-1;i>=0;i--){
        if(s[i]==t[j]){
            j--;
            j=max(-1LL,j);
        }
        po[i]=j+2;
    }
    ll ans=0;
    for(i=0;i<n;i++){
        if(pr[i]>0&&pr[i]<m){
            j=upper_bound(po.begin(),po.end(),pr[i]+1)-po.begin();
            ans=max(ans,j-i);
        }
    }
    cout<<ans-1;
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
        cout<<"\n";
    }
    return 0;
}