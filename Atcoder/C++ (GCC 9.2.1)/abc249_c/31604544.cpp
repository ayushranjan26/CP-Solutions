#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

int n,k;
string s[20];
int res=0;
void rec(int idx,vector<int> f){
    int i;
    if(idx==n){
        int cnt=0;
        for(i=0;i<26;i++){
            if(f[i]==k){
                cnt++;
            }
        }
        res=max(res,cnt);
    }
    else{
        rec(idx+1,f);
        for(i=0;i<s[idx].size();i++){
            f[s[idx][i]-'a']++;
        }
        rec(idx+1,f);
    }
}

void solve(){
    int i,j;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    vector<int> f(26,0);
    rec(0,f);
    cout<<res;
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

