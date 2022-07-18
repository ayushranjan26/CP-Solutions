#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//

void solve(){
    int i,j,n,k,d1;
    cin>>n>>k;
    int f[40]={0},a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        d1=a[i];
        for(j=0;j<30;j++){
            if(d1%2==1){
                f[j]++;
            }
            d1=d1/2;
        }
    }
    ll ans=0;
    for(i=0;i<40;i++){
        ans+=f[i]/k;
        if(f[i]%k!=0){
            ans++;
        }
    }
    cout<<ans;
    return;
}

int main(){
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
