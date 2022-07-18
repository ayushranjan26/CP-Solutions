#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,a,b;
    cin>>n>>a>>b;
    int res=(n*(n+1))/2;
    //cout<<res<<" ";

    int a1=n/a;
    res-=a*((a1*(a1+1))/2);
    //cout<<res<<" ";

    int b1=n/b;
    res-=b*((b1*(b1+1))/2);
    //cout<<res<<" ";

    int ab1=n/((a*b)/__gcd(a,b));
    res+=((a*b)/__gcd(a,b))*((ab1*(ab1+1))/2);
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
