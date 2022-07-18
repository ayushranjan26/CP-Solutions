#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n;
    string s;
    cin>>n>>s;
    deque<int> d;
    d.push_back(n);
    for(i=n-1;i>=0;i--){
        if(s[i]=='L'){
            d.push_back(i);
        }
        else{
            d.push_front(i);
        }
    }
    for(i=0;i<=n;i++){
        cout<<d.front()<<" ";
        d.pop_front();
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
