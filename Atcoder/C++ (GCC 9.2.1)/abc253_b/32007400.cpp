#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,m;
    cin>>n>>m;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    vector<int> v;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(s[i][j]=='o'){
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    int res=abs(v[0]-v[2])+abs(v[1]-v[3]);
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
