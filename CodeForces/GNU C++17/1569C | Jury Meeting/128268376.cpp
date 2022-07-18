#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=998244353;
int fac[200001];
void solve(){
    int i,j,k,n;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    if(a[0]-a[1]>1){
        cout<<"0";
        return;
    }
    else{
        if(a[0]==a[1]){
            cout<<fac[n];
        }
        else{
            int ans=fac[n],cnt=0,ded=0;
            for(i=0;i<n;i++){
                if(a[i]==a[1]){
                    cnt++;
                }
            }
            ded=fac[cnt];
            for(i=cnt+2;i<=n;i++){
                ded*=i;
                ded%=mod;
            }
            ans=(ans-ded+mod)%mod;
            cout<<ans;
        }
    }
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    fac[0]=1;
    for(int i=1;i<200001;i++){
        fac[i]=fac[i-1]*i;
        fac[i]%=mod;
    }
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}