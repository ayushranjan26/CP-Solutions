#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//

void solve()
{
    int i,j,k,n,m;
    string s;
    cin>>s;
    string ans="";
    if(s[0]=='1'){
        char c=s[0];
        s[0]='0';
        ans=c+s;
    }
    else{
        ans='1'+s;
    }
    cout<<ans;
    return;
}

int main(){
   // IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
