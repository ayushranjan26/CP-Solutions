#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    set<int> rem;
    for(i=0;i<n;i++){
        rem.insert(i+1);
    }
    arr[0]=a;
    arr[n-1]=b;
    rem.erase(a);
    rem.erase(b);
    for(i=1;i<n/2;i++){
        int d=*rem.rbegin();
        arr[i]=d;
        rem.erase(d);
    }
    for(i=n/2;i<n-1;i++){
        int d=*rem.begin();
        arr[i]=d;
        rem.erase(d);
    }
    int mx=0,mn=n+1;
    for(i=n/2;i<n;i++){
        mx=max(mx,arr[i]);
    }
    for(i=0;i<n/2;i++){
        mn=min(mn,arr[i]);
    }
    if(mx==b&&mn==a){
        for(i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        cout<<"-1";
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