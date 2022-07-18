#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

int dp[1000006];
void solve(){
    int i,j;
    int a,n;
    cin>>a>>n;
    for(i=0;i<1000006;i++){
        dp[i]=1e9;
    }
    dp[n]=0;
    queue<int> q;
    q.push(n);
    while(!q.empty()){
        n=q.front();
        q.pop();
        if(n==1){
            cout<<dp[n];
            return;
        }
        if(n%a==0){
            if(dp[n/a]==1e9){
                q.push(n/a);
                dp[n/a]=1+dp[n];
            }
        }

        string s=to_string(n),t="";
        for(int i=1;i<s.size();i++){
            t+=s[i];
        }
        t+=s[0];
        int d=stoi(t);
        if(dp[d]==1e9&&t[0]!='0'){
            q.push(d);
            dp[d]=1+dp[n];
        }

    }
    cout<<-1;
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
