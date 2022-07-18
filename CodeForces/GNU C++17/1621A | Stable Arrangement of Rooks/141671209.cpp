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
    int i,j,k,n;
    cin>>n>>k;
    char a[n][n];
    if(k>(n+1)/2){
        cout<<"-1";
        return;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]='.';
        }
    }
    i=0,j=0;
    while(k--){
        a[i][j]='R';
        i+=2;
        j+=2;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j];
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
        cout<<"\n";
        tc++;
    }
    return 0;
}