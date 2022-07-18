#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//

void solve(){
    ll i,j,k,n,m;
    cin>>n>>m;
    ll a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                a[i][j]=1e12;
            }
            else{
                a[i][j]=0;
            }
        }
    }
    for(i=0;i<m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        a[x-1][y-1]=z;
    }
    ll ans=0;
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i][j]>a[i][k]+a[k][j]&&a[i][k]!=1e12&&a[k][j]!=1e12){
                    a[i][j]=a[i][k]+a[k][j];
                }
                if(a[i][j]!=1e12){
                    ans+=a[i][j];
                }
            }
        }
    }

    cout<<ans;
    return;
}

int main(){
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
/*
8 7
3 1
3 2
3 4
4 5
4 6
3 7
7 8
*/
