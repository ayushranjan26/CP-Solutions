#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a[i][j]=0;
        }
    }
    for(i=0;i<m;i+=2){
        a[0][i]=1;
    }
    for(i=2;i<n;i+=2){
        a[i][0]=1;
        a[i][m-1]=1;
    }
    if(n>2){
        for(j=2;j<m-2;j+=2){
            a[n-1][j]=1;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}