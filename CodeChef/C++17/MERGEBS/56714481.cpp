#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

string a,b;
int n;
int memo[1001][1001];
int dp(int ia,int ib,int cnt1){
    if(ia==n&&ib==n){
        return 0;
    }
    else if(memo[ia][ib]!=-1){
        return memo[ia][ib];
    }
    else{
        int res1=1e12,res2=1e12;
        if(ia!=n){
            if(a[ia]=='0'){
                res1=cnt1+dp(ia+1,ib,cnt1);
            }
            else{
                res1=dp(ia+1,ib,cnt1+1);
            }
        }
        if(ib!=n){
            if(b[ib]=='0'){
                res2=cnt1+dp(ia,ib+1,cnt1);
            }
            else{
                res2=dp(ia,ib+1,cnt1+1);
            }
        }
        return memo[ia][ib]=min(res1,res2);
    }
}
void solve(){
    int i,j,k;
    cin>>n;
    cin>>a>>b;
    memset(memo,-1,sizeof(memo));
    cout<<dp(0,0,0);
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

