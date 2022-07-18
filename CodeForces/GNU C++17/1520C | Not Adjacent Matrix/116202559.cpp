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
    if(n==2){
        cout<<"-1";
        return;
    }
    ll a[n][n];
    ll c=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i+j)%2==0){
                a[i][j]=c;
                c++;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i+j)%2==1){
                a[i][j]=c;
                c++;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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