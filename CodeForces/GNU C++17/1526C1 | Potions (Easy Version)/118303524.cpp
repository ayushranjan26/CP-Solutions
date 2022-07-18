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
    ll i,j,n,m,x;
    cin>>n;
    ll a[n];
    vector<ll> v;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll pre=0,c1=0;
    for(i=0;i<n;i++){
        if(a[i]<0){
            v.push_back(a[i]);
        }
        pre+=a[i];
        if(pre<0){
            sort(v.rbegin(),v.rend());
            pre-=v.back();
            v.pop_back();
            c1++;
        }
    }
    cout<<n-c1;
    return;
}
 
int main()
{
    //IOS;
    ll t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}