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
    vector<vector<int> > s;
    vector<int> d;
    d.push_back(1);
    s.push_back(d);

    for(i=1;i<n;i++){
        d.clear();
        for(j=0;j<s[i-1].size();j++){
            d.push_back(s[i-1][j]);
        }
        d.push_back(i+1);
        for(j=0;j<s[i-1].size();j++){
            d.push_back(s[i-1][j]);
        }
        s.push_back(d);
        if(i>2){
            s[i-2].clear();
        }
    }

    for(i=0;i<s[n-1].size();i++){
        cout<<s[n-1][i]<<" ";
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

