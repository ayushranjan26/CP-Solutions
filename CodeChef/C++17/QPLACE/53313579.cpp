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
    int i,j,n,k;
    cin>>n;
    char c[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]='.';
        }
    }

    for(i=1;i<n-1;i++){
        c[i][i]='Q';
    }
    if(n%2==0){
        swap(c[0][0],c[1][1]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<c[i][j];
        }
        cout<<endl;
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
        //cout<<"\n";
        tc++;
    }
    return 0;
}
