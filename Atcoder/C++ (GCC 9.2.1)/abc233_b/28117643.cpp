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
    int i,j,l,r;
    cin>>l>>r;
    string s;
    cin>>s;
    string a="";
    for(i=l-1;i<r;i++){
        a+=s[i];
    }
    reverse(a.begin(),a.end());
    for(i=0;i<l-1;i++){
        cout<<s[i];
    }
    cout<<a;
    for(i=r;i<s.size();i++){
        cout<<s[i];
    }
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
