#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

void solve(){
    int i,j,l,r;
    cin>>l>>r;
    if(l%2==0){
       cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3;
    }
    else if((r-l+1)>4){
        l++;
       cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3;
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
