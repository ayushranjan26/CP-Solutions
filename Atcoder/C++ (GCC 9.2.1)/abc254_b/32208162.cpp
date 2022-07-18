#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

void solve(){
    int i,j,n;
    cin>>n;
    int a[n][n];
    a[0][0]=1;
    for(i=1;i<n;i++){
        for(j=0;j<=i;j++){
            if(j==0||j==i){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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
