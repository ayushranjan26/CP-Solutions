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
    ll i,j,x,y,z,n,m,k,ans=0;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll pk[n]={0};
    ll pk2[n]={0};
    for(i=1;i<n-1;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            pk[i]=1;
            pk2[i]=1;
        }
    }
    for(i=1;i<n;i++){
        pk[i]+=pk[i-1];
    }
 
    ll part=pk[k-1],mx_i=1;
    if(pk2[k-1]==1){
        part--;
    }
    for(i=k;i<n;i++){
        z=pk[i]-pk[i-k];
        if(pk2[i]==1){
            z--;
        }
        if(pk2[i-k+1]==1){
            z--;
        }
        if(z>part){
            part=z;
            mx_i=i-k+2;
        }
    }
    cout<<part+1<<" "<<mx_i;
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