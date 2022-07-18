#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,k;
    cin>>n>>k;
    int a[32]={0};
    for(i=0;i<32;i++){
        if(k&(1<<i)){
            a[i]++;
        }
    }
    int N=33;
    while(N--){
        for(i=31;i>0;i--){
            int d=n-a[i-1];
            if(d>=a[i]*2){
                a[i-1]+=a[i]*2;
                a[i]=0;
            }
            else{
                a[i]-=d/2;
                a[i-1]+=(d/2)*2;
            }
        }
    }
    int res=0;
    for(i=0;i<32;i++){
        //cout<<a[i]<<" ";
        res+=a[i];
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
        cout<<"\n";
        tc++;
    }
    return 0;
}
