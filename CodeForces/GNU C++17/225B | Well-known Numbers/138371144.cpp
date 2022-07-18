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
    int i,j,n,s,k;
    cin>>s>>k;
    if(s==1){
        cout<<"2\n0 1";
        return;
    }
    vector<int> v;
    v.push_back(1);
    while(v.back()<=s){
        int d=0;
        for(i=v.size()-1;i>=v.size()-k&&i>=0;i--){
            d+=v[i];
        }
        v.push_back(d);
    }
    v.pop_back();
    vector<int> res;
    while(s>0){
        i=upper_bound(v.begin(),v.end(),s)-v.begin();
        res.push_back(v[i-1]);
        s-=v[i-1];
    }
    if(res.size()==1){
        res.push_back(0);
    }
    cout<<res.size()<<"\n";
    for(i=0;i<res.size();i++){
        cout<<res[i]<<" ";
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