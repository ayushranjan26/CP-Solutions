#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,x,a,d,n;
    cin>>x>>a>>d>>n;
    if(d<0){
        x=-x;
        a=-a;
        d=-d;
    }
    else{}
    if(x<=a){
        cout<<a-x;
    }
    else if(x>=a+(n-1)*d){
        cout<<x-a-(n-1)*d;
    }
    else{
        x-=a;
        j=x%d;
        cout<<min(j,d-j);
    }
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
