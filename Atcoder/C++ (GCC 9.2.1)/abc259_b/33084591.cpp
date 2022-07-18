#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j;
    long double a,b,d;
    cin>>a>>b>>d;
    d=d*(3.141592653589793/180.000);
    long double x,y;
    x=a*cos(d)-b*sin(d);
    y=b*cos(d)+a*sin(d);
    cout<<fixed<<setprecision(20)<<x<<" "<<y;
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
