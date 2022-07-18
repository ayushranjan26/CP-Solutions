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
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll low=1,high=n;
    while(low<high){
        //cout<<low;
        ll mid=(low+high+1)/2;
        ll b[n];
        for(i=0;i<n;i++){
            if(a[i]<mid){
                b[i]=-1;
            }
            else{
                b[i]=1;
            }
        }
        ll pre[n];
        pre[0]=b[0];
        for(i=1;i<n;i++){
            pre[i]=pre[i-1]+b[i];
        }
        ll mx=pre[k-1],mn=0;
        for(i=k;i<n;i++){
            mn=min(mn,pre[i-k]);
            mx=max(mx,pre[i]-mn);
        }
        if(mx>0){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    cout<<low;
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