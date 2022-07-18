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
    int i,j,n,a;
    string s;
    cin>>a>>s;
    n=s.size();
    vector<int> v(n);
    for(i=0;i<n;i++){
        string t="";
        t+=s[i];
        int d=stoi(t);
        v[i]=d;
    }
    map<int,int> mp;
    for(i=0;i<n;i++){
        int sm=0;
        for(j=i;j<n;j++){
            sm+=v[j];
            mp[sm]++;
        }
    }
    int res=0;
    for(auto it:mp){
        if(it.ft!=0&&a%it.ft==0){
            res+=it.sd*mp[a/it.ft];
        }
        if(it.ft==0&&a==0){
            res+=it.sd*((n*(n+1))/2);
        }
        //cout<<it.ft<<" "<<it.sd<<endl;
        //cout<<res<<endl;
    }
    //res/=2;
    cout<<res;
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