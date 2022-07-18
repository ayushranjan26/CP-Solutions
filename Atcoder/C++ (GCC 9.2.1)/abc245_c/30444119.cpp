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
    cin>>n>>k;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    int x[n][2];
    x[0][0]=0,x[0][1]=0;
    int idx[n]={0};
    for(i=1;i<n;i++){
        x[i][0]=-1;
        x[i][1]=-1;
        if(x[i-1][0]==0){
            if(abs(a[i]-a[i-1])<=k){
                x[i][0]=0;
            }
            if(abs(b[i]-a[i-1])<=k){
                x[i][1]=0;
            }
        }
        if(x[i-1][1]==0){
            if(abs(a[i]-b[i-1])<=k){
                x[i][0]=0;
            }
            if(abs(b[i]-b[i-1])<=k){
                x[i][1]=0;
            }
        }
        if(x[i][0]==-1&&x[i][1]==-1){
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}

