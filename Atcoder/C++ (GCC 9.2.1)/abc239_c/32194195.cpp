#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

void solve(){
    int i,j,x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    vector<pii> v;
    v.push_back({x1-1,y1-2});
    v.push_back({x1-1,y1+2});
    v.push_back({x1+1,y1-2});
    v.push_back({x1+1,y1+2});
    v.push_back({x1-2,y1-1});
    v.push_back({x1-2,y1+1});
    v.push_back({x1+2,y1-1});
    v.push_back({x1+2,y1+1});
    for(i=0;i<v.size();i++){
        int x,y;
        x=v[i].ft,y=v[i].sd;
        if((abs(x-x2)==2&&abs(y-y2)==1)||(abs(x-x2)==1&&abs(y-y2)==2)){
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";
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
