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
    ll i,j,k,n;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll mn=INF;
    ll itr=0;
    for(i=0;i<n;i++){
        if(a[i]<mn){
            mn=a[i];
            itr=i;
        }
    }
    cout<<n-1<<endl;
    ll c=1;
    for(i=itr+1;i<n;i++){
        if(1){
            cout<<itr+1<<" "<<i+1<<" "<<mn<<" "<<mn+c<<"\n";
            c++;
        }
    }
    c=1;
    for(i=itr-1;i>=0;i--){
        if(1){
            cout<<itr+1<<" "<<i+1<<" "<<mn<<" "<<mn+c<<"\n";
            c++;
        }
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
        cout<<"\n";
    }
    return 0;
}