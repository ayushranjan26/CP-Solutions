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
ll Q(ll t,ll i,ll j,ll n){
    cout<<"? "<<t<<" "<<i<<" "<<j<<" "<<n<<endl;
    ll a;
    cin>> a;
    return a;
}
 
void solve()
{
    ll i,j,k,n,d;
    cin>>n;
    ll ans[n]={0};
    i=0,j=n-1;
    while(i<n){
        if(i==j){
            i--;
        }
        d=Q(1,i+1,j+1,n-1);
        if(d==n){
            ans[j]=n;
            break;
        }
        else if(d==n-1){
            d=Q(1,j+1,i+1,n-1);
            if(d==n){
                ans[i]=n;
                j=i;
                break;
            }
        }
        i++;
        j--;
    }
    for(i=0;i<n;i++){
        if(i!=j){
            d=Q(2,i+1,j+1,1);
            ans[i]=d;
        }
    }
    cout<<"! ";
    for(i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
 
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