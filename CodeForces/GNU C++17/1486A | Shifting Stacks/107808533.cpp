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
 
using namespace std;
 
void solve()
{
    int i,j,k,q,n,m,y,x,z,l,r;
    cin>>n;
    ll h[n]={0};
    for(i=0;i<n;i++){
        cin>>h[i];
    }
 
    for(i=0;i<n-1;i++){
        if(h[i]>i){
            h[i+1]+=h[i]-i;
            h[i]=i;
        }
    }
    ll f=1;
 
    for(i=0;i<n-1;i++){
        if(h[i]>=h[i+1]){
            f=0;
            break;
        }
    }
    
    if(f){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
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