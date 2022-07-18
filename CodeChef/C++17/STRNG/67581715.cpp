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
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int g=a[0];
    for(i=1;i<n;i++){
        g=__gcd(g,a[i]);
    }
    if(g!=1){
        cout<<n;
    }
    else{
        int pre[n],suf[n],res=0;
        for(i=0;i<n;i++){
            pre[i]=a[i];suf[i]=a[i];
        }
        for(i=1;i<n;i++){
            pre[i]=__gcd(pre[i-1],pre[i]);
        }
        for(i=n-2;i>=0;i--){
            suf[i]=__gcd(suf[i+1],suf[i]);
        }
        for(i=0;i<n;i++){
            if(i==0){
                if(suf[i+1]!=1){
                    res++;
                }
            }
            else if(i==n-1){
                if(pre[i-1]!=1){
                    res++;
                }
            }
            else{
                if(__gcd(pre[i-1],suf[i+1])!=1){
                    res++;
                }
            }
        }
        cout<<res;
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
