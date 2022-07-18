#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

void solve(){
    int i,j,a,b,c,d;
    cin>>a>>b>>c>>d;
    int isPrime[204]={0};
    isPrime[1]=1;
    for(i=2;i<204;i++){
        if(isPrime[i]==0){
            for(j=i+i;j<204;j+=i){
                isPrime[j]=1;
            }
        }
    }
    for(i=a;i<=b;i++){
        bool flg=true;
        for(j=c;j<=d;j++){
            if(isPrime[i+j]==0){
                flg=false;
            }
        }
        if(flg){
            cout<<"Takahashi";
            return;
        }
    }
    cout<<"Aoki";
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
