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
    cin>>n;
    int d=n/3;
    int c1,c2;
    c1=d;
    c2=d;
    //cout<<d%3<<" ";
    if(n%3==2){
        c1++;
    }
    if(n%3==1){
        c2++;
    }
    cout<<c2<<" "<<c1;
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