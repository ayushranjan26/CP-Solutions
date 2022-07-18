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
    bool f=true;
    if(n>m){
        f=false;
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(f){
                cout<<1+(n+1)*i+(j)*(i+1)<<" ";
            }
            else{
                cout<<1+i+j*(m+i+1)<<" ";
            }
        }
        cout<<"\n";
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
