#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,n,k;
    cin>>n>>k;
    int a[n];
    int f1=0,f2=0,f3=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==k){
            f2++;
        }
        else if(a[i]<k){
            f1++;
        }
        else{
            f3++;
        }
    }
    if(f2>0||(f1>0&&f3>0)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
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

