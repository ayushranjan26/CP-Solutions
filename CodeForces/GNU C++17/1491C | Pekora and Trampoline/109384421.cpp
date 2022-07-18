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
 
void solve()
{
    ll i,j,k,n;
    cin>>n;
    ll s[n]={0};
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    ll ans=0;
    ll c[n]={0};
    for(i=0;i<n;i++){
        ans+=max(s[i]-c[i]-1,0LL);
        for(j=i+2;j<=min(n-1,i+s[i]);j++){
            c[j]++;
        }
        ll w=s[i]-c[i]-1;
        if(w<0){
            c[i+1]+=-w;
        }
    }
    cout<<ans;
    return;
}
int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}