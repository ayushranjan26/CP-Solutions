#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(int tc){
    int i,j,n;
    string s;
    cin>>s;
    string t=s;
    t+=s;
    t+=s;
    t+=s;
    t+=s;
    t+=s;
    t+=s;
    for(i=0;i<6;i++){
        cout<<t[i];
    }
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve(tc);
        cout<<"\n\n";
        tc++;
    }
    return 0;
}

