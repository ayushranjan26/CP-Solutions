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
    int a[n],sm=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        sm+=a[i]-2;
    }
    sort(a,a+n);
    if(a[0]==1||sm%2==1){
        cout<<"CHEF";
    }
    else{
        cout<<"CHEFINA";
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
