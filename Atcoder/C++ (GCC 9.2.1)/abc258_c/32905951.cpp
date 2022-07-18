#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,q,idx=0;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--){
        cin>>i>>j;
        if(i==1){
            idx-=j;
            idx+=n;
            idx%=n;
        }
        else{
            cout<<s[(idx+j-1)%n]<<endl;
        }
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
