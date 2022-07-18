#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
 
void solve()
{
    ll i,j,k,n;
    cin>>n;
    n=n*2;
    int a[n],c0=0,c1=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==1){
            c1++;
        }
        else{
            c0++;
        }
    }
    if(c1==n/2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return;
}
 
int main(){
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
 