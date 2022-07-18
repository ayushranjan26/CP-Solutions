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
    int i,j,n,m;
    cin>>n>>m;
    int a[n+1]={0},b[m+1]={0};
    for(i=0;i<n+1;i++){
        cin>>a[i];
    }
    for(i=0;i<m+1;i++){
        cin>>b[i];
    }
    i=0;
    if(n>m){
        if(a[i]*b[i]>0){
            cout<<"Infinity";
        }
        else{
            cout<<"-Infinity";
        }
    }
    else if(n<m){
        cout<<"0/1";
    }
    else{
        int d=__gcd(abs(a[i]),abs(b[i]));
        if(a[i]*b[i]<0){
            cout<<"-"<<abs(a[i])/d<<"/"<<abs(b[i])/d;
        }
        else{
            cout<<abs(a[i])/d<<"/"<<abs(b[i])/d;
        }
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        //cout<<endl;
        cout<<endl;
        tc++;
    }
    return 0;
}