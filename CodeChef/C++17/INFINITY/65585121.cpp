#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,k;
    cin>>n;
    n--;
    if(n%5==0){
        cout<<2*(n/5);
    }
    else{
        if(n%5<4){
            cout<<2*(n/5)+1;
        }
        else{
            cout<<2*(n/5)+2;
        }
    }
    return;
}

int32_t main(){
    IOS;
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
