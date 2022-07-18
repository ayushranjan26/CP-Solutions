#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=998244353;

void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=1e9+1,val=0;
    for(i=0;i<n;i++){
        int curr=0;
        for(j=0;j<n;j++){
            int d=a[j]^a[i];
            curr=curr|d;
        }
        if(curr<ans){
            ans=curr;
            val=a[i];
        }
    }
    cout<<val<<" "<<ans;
    return;
}

int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}

