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
    int a[n];
    int c=(n+1)/2;
    for(i=0;i<n;i+=2){
        a[i]=c;
        c--;
    }
    c=(n+1)/2;
    c++;
    for(i=1;i<n;i+=2){
        a[i]=c;
        c++;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
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
