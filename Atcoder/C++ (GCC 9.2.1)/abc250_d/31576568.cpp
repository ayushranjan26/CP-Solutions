#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

int isPrime[1000006];

void solve(){
    int i,j,k,n;
    cin>>n;

    isPrime[0]=1,isPrime[1]=1;
    for(i=2;i<=100000;i++){
        if(isPrime[i]==0){
            for(j=i+i;j<=1000000;j+=i){
                isPrime[j]=1;
            }
        }
    }
    vector<int> v;
    for(i=2;i<=1000000;i++){
        if(isPrime[i]==0){
            v.push_back(i);
        }
    }
    int res=0;
    for(i=0;i<v.size();i++){
        int q3=v[i]*v[i]*v[i];
        int lo=0,hi=i-1,mx=0;
        bool f=false;
        while(lo<=hi){
            int m=(lo+hi)/2;
            if(v[m]<=n/q3){
                mx=max(m,mx);
                f=true;
                lo=m+1;
            }
            else{
                hi=m-1;
            }
        }
        if(f){
            //cout<<mx<<" "<<q3<<endl;
            res+=mx+1;
        }
    }
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

