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
    int cnt=0;
    int l=n,r=0;
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cnt++;
            l=min(i,l);
            r=max(r,i+1);
        }
    }
    if(cnt<2){
        cout<<"0";
    }
    else if(r-l==2){
        cout<<1;
    }
    else{
        cout<<(r-l-2);
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
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 