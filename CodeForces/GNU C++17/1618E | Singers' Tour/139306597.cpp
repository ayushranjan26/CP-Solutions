#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
 
void solve(){
    int i,j,n,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int d[n];
    for(i=0;i<n;i++){
        d[i]=a[i]-a[(i-1+n)%n];
    }
    int diff[n]={0};
    for(i=1;i<n;i++){
        if((d[i-1]-d[i])%n==0){
            diff[i]=diff[i-1]+(d[i-1]-d[i])/n;
        }
        else{
            cout<<"NO";
            return;
        }
    }
    int sm=0;
    for(i=0;i<n;i++){
        sm+=(n-i)*diff[i];
    }
    sm=a[n-1]-sm;
    int z=(n*(n+1))/2;
    if(sm%z!=0){
        cout<<"NO";
        return;
    }
    int x=sm/z;
    for(i=0;i<n;i++){
        if(x+diff[i]<=0){
            cout<<"NO";
            return;
        }
    }
 
    cout<<"YES\n";
    for(i=0;i<n;i++){
        cout<<x+diff[i]<<" ";
    }
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}