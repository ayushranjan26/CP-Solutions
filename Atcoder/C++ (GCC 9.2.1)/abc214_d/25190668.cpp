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
    int i,j,k,n,s,t,ans=0;
    cin>>s>>t;
    for(i=0;i<=100;i++){
        for(j=0;j<=100;j++){
            for(k=0;k<=100;k++){
                if(i+j+k<=s&&i*j*k<=t){
                    ans++;
                }
            }
        }
    }
    cout<<ans;
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
