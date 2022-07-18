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
    cin>>n>>m>>k;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    int sm=k;
    if(sm>=m){
        cout<<"0";
        return;
    }
    sm--;
    for(i=0;i<n;i++){
        sm+=v[i];
        if(sm>=m){
            cout<<i+1;
            return;
        }
        sm--;
    }
    cout<<"-1";
    return;
}
 
int main(){
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
 