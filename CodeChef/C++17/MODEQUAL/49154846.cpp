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
    ll a[n],mn=1e10;
    for(i=0;i<n;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    int cnt=0;
    for(i=0;i<n;i++){
        if(a[i]==mn){
            cnt++;
        }
        else{
            int d;
            d=a[i]-mn;
            if(a[i]%d!=mn){
                cout<<n;
                return;
            }
        }
    }

    cout<<n-cnt;
    return;
}

int main(){
    IOS;
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

