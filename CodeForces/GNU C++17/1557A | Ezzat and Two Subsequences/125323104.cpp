#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
int mod=1e9+7;
const int N=200005;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n];
    ll sum=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    double ans=1.0*a[n-1];
    sum-=a[n-1];
    ans+=(1.0*sum)/(1.0*(n-1));
    cout<<fixed<<setprecision(7)<<ans;
    return;
}
 
int main(){
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