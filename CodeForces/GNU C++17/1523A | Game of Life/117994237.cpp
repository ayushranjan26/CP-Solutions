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
ll M =1000000007;
 
void solve()
{
    ll i,j,n,m,k,x;
    cin>>n>>m;
    string s,ans;
    cin>>s;
    ans=s;
    ll a[n],b[n];
    for(i=0;i<n;i++){
        a[i]=s[i]-'0';
        b[i]=a[i];
    }
    for(i=1;i<n;i++){
        if(a[i-1]!=0&&a[i]==0){
            a[i]=a[i-1]+1;
        }
    }
    for(i=n-2;i>=0;i--){
        if(b[i+1]!=0&&b[i]==0){
            b[i]=b[i+1]+1;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==0){
            a[i]=b[i];
        }
        if(b[i]==0){
            b[i]=a[i];
        }
        a[i]=min(a[i],b[i]);
    }
    for(i=0;i<n;i++){
        //cout<<a[i]<<" ";
        if(a[i]<=m+1&&a[i]!=0){
            ans[i]='1';
        }
    }
    vector<ll> v;
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            v.push_back(i);
        }
    }
    for(i=0;i<(int)v.size()-1;i++){
        if((v[i+1]-v[i])%2==0){
            ans[v[i]+(v[i+1]-v[i])/2]='0';
        }
    }
    cout<<ans;
    return;
}
 
int main()
 
{
    //IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}