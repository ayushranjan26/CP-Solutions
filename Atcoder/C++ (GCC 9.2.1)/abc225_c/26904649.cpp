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
    int i,j,n,m,k;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    bool flg=true;
    for(i=0;i<n;i++){
        for(j=1;j<m;j++){
            if(a[i][j]!=a[i][j-1]+1){
                flg=false;
            }
        }
    }
    for(i=1;i<n;i++){
        if(a[i][0]!=a[i-1][0]+7){
            flg=false;
        }
    }
    k=(a[0][0])%7;
    if(k==0){
        k=7;
    }
    if(k+m-1>7){
        flg=false;
    }
    if(flg){
        cout<<"Yes";
        return ;
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
        //cout<<"\n";
        tc++;
    }
    return 0;
}
