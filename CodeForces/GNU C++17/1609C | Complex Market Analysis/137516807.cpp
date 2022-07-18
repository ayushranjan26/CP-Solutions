#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
vector<bool> is_prime(1000006, true);
void solve(){
    int i,j,k,n,e;
    cin>>n>>e;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int res=0;
    for(i=0;i<n;i++){
        if(is_prime[a[i]]){
            int lft=0,rgt=0,idx=i+e;
            for(j=idx;j<n;j+=e){
                if(a[j]==1){
                    rgt++;
                }
                else{
                    break;
                }
            }
            idx=i-e;
            for(j=idx;j>=0;j-=e){
                if(a[j]==1){
                    lft++;
                }
                else{
                    break;
                }
            }
            res+=lft*rgt;
            res+=lft+rgt;
        }
    }
    cout<<res;
    return;
}
 
int32_t main(){
    //IOS;
    int n=1000004;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
 
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