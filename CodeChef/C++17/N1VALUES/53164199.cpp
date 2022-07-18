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
    int i,j,k,n;
    cin>>n;
    vector<int> res;
    res.push_back(1);
    res.push_back(1);
    int sm=2;
    for(i=0;i<n-2;i++){
        res.push_back(i+2);
        sm+=i+2;
    }
    j=1;
    for(i=0;i<n;i++){
        j=j*2;
    }
    if(n>1){
        k=j-sm;
        res.push_back(k);
    }
    sort(res.begin(),res.end());
    for(i=0;i<n+1;i++){
        cout<<res[i]<<" ";
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
