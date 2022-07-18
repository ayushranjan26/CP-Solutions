#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

void solve(){
    int i,j,n;
    cin>>n;
    int ans=0;
    if(n%2==1){
        i=n/2;
        j=n-i;
        int res=(i*j)/(__gcd(i,j))-__gcd(i,j);
        ans=res;
        cout<<res;
    }
    else if(n==2){
        cout<<0;
    }
    else{
        n=n/2;
        if(n%2==0){
            i=n+1;
            j=n-1;
            int res=(i*j)/(__gcd(i,j))-__gcd(i,j);
            ans=res;
            cout<<res;
        }
        else{
            i=n+2;
            j=n-2;
            int res=(i*j)/(__gcd(i,j))-__gcd(i,j);
            ans=res;
            cout<<res;
        }
        //n=n*2;
    }
    /*int res=0;
    for(i=1;i<n;i++){
        j=n-i;
        int res=max(res,(i*j)/(__gcd(i,j))-__gcd(i,j));
        //cout<<i<<"x"<<n-i<<"="<<d<<" "<<g<<" "<<(d-g*g)/(g)<<endl;
    }
    cout<<" - ";
    cout<<res;
    if(ans!=res){
        cout<<"ffffffffffffffffffff";
    }*/
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
