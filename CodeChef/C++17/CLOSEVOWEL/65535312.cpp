#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n;
    string s;
    cin>>n>>s;
    int res=1;
    for(i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            continue;
        }
        vector<int> d(5);
        d[0]=abs(s[i]-'a');d[1]=abs(s[i]-'e');d[2]=abs(s[i]-'i');d[3]=abs(s[i]-'o');d[4]=abs(s[i]-'u');
        sort(d.begin(),d.end());
        if(d[1]==d[0]){
            res*=2;
            res%=mod;
        }
    }
    cout<<res;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
