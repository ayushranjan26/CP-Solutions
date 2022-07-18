#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod = 998244353;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n][5];
    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            int ci=0,cj=0,cij=0;
            for(k=0;k<n;k++){
                if(a[k][i]==1&&a[k][j]==1){
                    cij++;
                }
                if(a[k][i]==1&&a[k][j]==0){
                    ci++;
                }
                if(a[k][i]==0&&a[k][j]==1){
                    cj++;
                }
            }
            if(ci+cj+cij==n&&ci<=n/2&&cj<=n/2){
                cout<<"YES";
                return ;
            }
        }
    }
    cout<<"NO";
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