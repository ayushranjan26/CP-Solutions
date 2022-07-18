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
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]==n){
        vector<int> v;
        for(i=1;i<n;i++){
            v.push_back(a[i]);
        }
        reverse(v.begin(),v.end());
        cout<<n<<" ";
        for(i=0;i<n-1;i++){
            cout<<v[i]<<" ";
        }
    }
    else if(a[n-1]==n){
        vector<int> v;
        for(i=0;i<n-1;i++){
            v.push_back(a[i]);
        }
        reverse(v.begin(),v.end());
        v.push_back(n);
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
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