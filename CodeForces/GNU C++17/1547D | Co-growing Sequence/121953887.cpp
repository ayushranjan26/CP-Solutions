#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
 
void solve(){
    int i,j,k,n,m;
    cin>>n;
    ll x[n];
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    v[0]=0;
    for(i=1;i<n;i++){
        int d1,d2,d3;
        d1=x[i]|x[i-1];
        d2=d1^x[i];
        v[i]=d2;
        x[i]=d1;
    }
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
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