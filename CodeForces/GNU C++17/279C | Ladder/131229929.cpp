#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod = 1e7+9;
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int a[n]={0},d[n]={0};
    int cnt=0;
    for(i=n-2;i>=0;i--){
        if(arr[i+1]>=arr[i]){
            cnt++;
        }
        else{
            cnt=0;
        }
        a[i]=i+cnt;
    }
    cnt=0;
    for(i=n-2;i>=0;i--){
        if(arr[i+1]<=arr[i]){
            cnt++;
        }
        else{
            cnt=0;
        }
        d[i]=i+cnt;
    }
    a[n-1]=n-1,d[n-1]=n-1;
 
    for(i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        l--,r--;
        l=a[l];
        //cout<<l<<" ";
        l=d[l];
        //cout<<l<<" ";
        if(l>=r){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<"\n";
    }
    return;
 
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}