#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
bool chk(vector<int>& v){
    bool f=true;
    int i,n=v.size();
    for(i=0;i<n/2;i++){
        if(v[i]!=v[n-i-1]){
            f=false;
            break;
        }
    }
    return f;
}
 
void solve(){
    int i,j,n;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    if(chk(v)){
        cout<<"YES";
        return;
    }
    int a1,a2;
    for(i=0;i<n/2;i++){
        if(v[i]!=v[n-i-1]){
            a1=v[i],a2=v[n-i-1];
            break;
        }
    }
    vector<int> v1,v2;
    for(i=0;i<n;i++){
        if(v[i]!=a1){
            v1.push_back(v[i]);
        }
        if(v[i]!=a2){
            v2.push_back(v[i]);
        }
    }
    if(chk(v1)||chk(v2)){
        cout<<"YES";
        return;
    }
    cout<<"NO";
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