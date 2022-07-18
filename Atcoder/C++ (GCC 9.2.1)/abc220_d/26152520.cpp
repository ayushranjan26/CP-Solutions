#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod= 998244353;

int n;
int a[100005];
map<pair<int,int>,vector<int>> memo;
vector<int> dp(int prev,int idx){
    if(idx==n){
        vector<int> v(10,0);
        v[prev]++;
        return v;
    }
    else if(memo.find({prev,idx})!=memo.end()){
        return memo[{prev,idx}];
    }
    else{
        vector<int> v1=dp((prev+a[idx])%10,idx+1);
        vector<int> v2=dp((prev*a[idx])%10,idx+1);
        for(int i=0;i<10;i++){
            v1[i]+=v2[i];
            v1[i]%=mod;
        }
        memo[{prev,idx}]=v1;
        return v1;
    }
}

void solve(){
    int i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> res=dp(a[0],1);
    for(i=0;i<10;i++){
        cout<<res[i]<<"\n";
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
