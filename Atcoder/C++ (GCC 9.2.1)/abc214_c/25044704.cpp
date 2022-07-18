#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
int mod=1e9+7;
const int N=200005;

void solve(){
    int i,j,k,n;
    cin>>n;
    if(n<=125){
        cout<<"4";
        return;
    }
    if(n<=211){
        cout<<"6";
        return;
    }
    if(n<=214 ){
        cout<<"8";
        return;
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
        cout<<"\n";
        tc++;
    }
    return 0;
}
