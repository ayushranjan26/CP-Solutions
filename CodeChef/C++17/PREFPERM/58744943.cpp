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
    int a[k];
    for(i=0;i<k;i++){
        cin>>a[i];
    }
    int res[n];
    for(i=0;i<n;i++){
        res[i]=i+1;
    }
    int last=0;
    for(i=0;i<k;i++){
        swap(res[last],res[a[i]-1]);
        last=a[i];

    }
    for(i=0;i<n;i++){
        cout<<res[i]<<" ";
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
