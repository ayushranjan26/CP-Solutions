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
    int i,j,n;
    cin>>n;
    string s[n],t[n];
    for(i=0;i<n;i++){
        cin>>s[i]>>t[i];
    }
    for(i=0;i<n;i++){
        int c1=1,c2=1;
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(s[i]==s[j]||s[i]==t[j]){
                c1=0;
            }
            if(t[i]==s[j]||t[i]==t[j]){
                c2=0;
            }
        }
        if(c1+c2<1){
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";
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

