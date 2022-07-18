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
    string s;
    cin>>s;
    bool ok=false;
    int res=1e9;
    vector<int> a;
    for(j=0;j<n;j++){
        if(s[j]=='a'){
            a.push_back(j);
        }
    }
 
    for(i=1;i<a.size();i++){
        if(a[i]-a[i-1]==3){
            if(s[a[i-1]+1]!=s[a[i-1]+2]){
                res=min(res,4LL);
                ok=true;
            }
        }
        if(a[i]-a[i-1]==2){
                res=min(res,3LL);
                ok=true;
        }
        if(a[i]-a[i-1]==1){
                res=min(res,2LL);
                ok=true;
        }
        if(i!=a.size()-1){
            //cout<<a[i]<<" ";
            if(a[i]-a[i-1]==3&&a[i+1]-a[i]==3&&s[a[i-1]+1]==s[a[i-1]+2]&&s[a[i]+1]==s[a[i]+2]&&s[a[i-1]+1]!=s[a[i]+1]){
                res=min(res,7LL);
                ok=true;
            }
        }
    }
    if(ok){
        cout<<res;
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