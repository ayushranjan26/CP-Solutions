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
    if(k==0){
        cout<<"-1";
        return ;
    }
    vector<int> res(n);
    for(i=0;i<n;i++){
        res[i]=i+1;
    }
    int rem=n-k;
    if(rem%2==1){
        rem--;
        swap(res[0],res[1]);
    }

    i=n-1;
    while(rem>0){
        swap(res[i],res[i-1]);
        i-=2;
        rem-=2;
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
