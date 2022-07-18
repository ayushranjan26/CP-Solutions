#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int f[26]={0};
    for(i=0;i<n;i++){
        f[(int)(s[i]-'a')]++;
    }
    int cnt_even=0,cnt_odd=0;
    for(i=0;i<26;i++){
        if(f[i]%2){
            cnt_odd++;
        }
    }
    cnt_even=n-cnt_odd;
 
    int res=1;
    for(i=2;i<=n/k;i++){
        if(i%2==0){
            if(cnt_even>=i*k){
                res=i;
            }
        }
        else{
            if(cnt_even>=(i-1)*k){
                res=i;
            }
        }
    }
    cout<<res;
    return;
}
 
int32_t main(){
    IOS;
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