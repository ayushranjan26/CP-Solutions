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
    n++;
    s+="1";
    vector<int> v[26];
    int cnt=1;
    for(i=1;i<n;i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        else{
            v[s[i-1]-'a'].push_back(cnt);
            cnt=1;
        }
    }

    for(i=0;i<26;i++){
        sort(v[i].rbegin(),v[i].rend());
        for(j=1;j<v[i].size();j++){
            v[i][j]+=v[i][j-1];
        }
    }

    int mx=1;
    for(i=0;i<n;i++){
        for(j=0;j<26;j++){
            if(v[j].size()>i){
                mx=max(mx, v[j][i]);
            }
        }
        cout<<mx<<" ";
    }

    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
