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
    n++;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(n%2==0){
        int d=0;
        for(i=0;i<n;i++){
            d=d^a[i];
        }
        bool f=true;
        for(i=0;i<n;i++){
            int x=d^a[i];
            if(f&&x==0){
                f=false;
                continue;
            }
            cout<<x<<" ";
        }
    }
    else{
        for(i=1;i<n;i++){
            cout<<(a[i]^a[0])<<" ";
        }
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
