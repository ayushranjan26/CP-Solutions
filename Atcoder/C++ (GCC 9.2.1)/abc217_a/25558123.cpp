#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e5+1;
const int INF=1e18;

int sum(int l,int r){
    int res=(r*(r+1))/2-(l*(l+1))/2;
    return res;
}

void solve(){
    int i,j,k,n,d;
    cin>>n>>k;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    a.push_back(0);
    n++;
    int ans=0;
    for(i=0;i<n-1;i++){
        if(k==0){
            break;
        }
        else{
            if((a[i]-a[i+1])*(i+1)<k){
                k-=(a[i]-a[i+1])*(i+1);
                ans+=(i+1)*(sum(a[i+1],a[i]));
            }
            else{
                int d1,d2;
                d1=k/(i+1);
                d2=k%(i+1);
                ans+=(i+1)*(sum(a[i]-d1,a[i]));
                ans+=d2*(a[i]-d1);
                k=0;
            }
        }
    }
    cout<<ans;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
