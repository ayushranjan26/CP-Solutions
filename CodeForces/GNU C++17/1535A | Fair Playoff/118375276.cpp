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
    ll i,j,k,n,m,x;
    ll a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    ll b[4];
    b[0]=a[0];
    b[1]=a[1];
    b[2]=a[2];
    b[3]=a[3];
    sort(b,b+4);
    if(a[0]==b[3]&&a[1]==b[2]){
        cout<<"NO";
        return;
    }
    if(a[0]==b[2]&&a[1]==b[3]){
        cout<<"NO";
        return;
    }
    if(a[2]==b[3]&&a[3]==b[2]){
        cout<<"NO";
        return;
    }
    if(a[3]==b[3]&&a[2]==b[2]){
        cout<<"NO";
        return;
    }
    cout<<"YES";
 
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