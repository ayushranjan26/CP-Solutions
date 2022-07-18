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
    int i,j,k,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=1;
    for(i=0;i<n;i++){
        while(a[i]%2==0){
            a[i]=a[i]/2;
            ans=ans*2;
        }
    }
    sort(a,a+n);
    a[n-1]=a[n-1]*ans;
    int sum=0;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum;
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