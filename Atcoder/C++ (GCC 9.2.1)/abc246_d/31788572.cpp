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
    int res=1e18;
    for(int a=0;a<=1000000;a++){
        int lo=0,hi=1e6,b=hi;
        while(lo<=hi){
            int m=(lo+hi)/2;
            if(a*a*a +a*a*m +a*m*m +m*m*m>=n){
                b=min(b,m);
                hi=m-1;
            }
            else{
                lo=m+1;
            }
        }
        res=min(res,a*a*a +a*a*b +a*b*b +b*b*b);
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
        cout<<"\n\n";
        tc++;
    }
    return 0;
}

