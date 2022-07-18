#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;
const int m = 998244353;
void solve(){
    int i,j,n,k;
    cin>>n;
    string s=to_string(n);
    k=s.size();
    int res=0;
    int val=9;
    for(i=1;i<k;i++){
        int l,r;
        l=val;
        r=val+1;
        if(l%2==0){
            l/=2;
        }
        else{
            r/=2;
        }
        l%=m;
        r%=m;
        res+=l*r;
        res%=m;
        val=val*10;
    }
    int pw=1;
    for(i=1;i<k;i++){
        pw=pw*10;
    }
    n-=pw;
    n++;
    int l,r;
    l=n;

    r=n+1;
    if(l%2==0){
        l/=2;
    }
    else{
        r/=2;
    }
    l%=m;
    r%=m;
    res+=l*r;
    res%=m;
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
