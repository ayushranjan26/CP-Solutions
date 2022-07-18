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
    cin>>n>>m>>k;
    if(n%2==1){
        k-=m/2;
    }
    if(k<0){
        cout<<"NO";
        return;
    }
    if(m%2==1){
        m-=1;
    }
    if(k%2==0&&2*k<=n*m){
        cout<<"YES";
        return;
    }
    cout<<"NO";
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        //cout<<endl;
        cout<<endl;
        tc++;
    }
    return 0;
}