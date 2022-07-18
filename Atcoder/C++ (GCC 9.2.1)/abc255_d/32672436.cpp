#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,q;
    cin>>n>>q;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int pre[n]={0};
    for(i=0;i<n;i++){
        pre[i]=a[i];
    }
    for(i=1;i<n;i++){
        pre[i]+=pre[i-1];
    }

    while(q--){
        int x;
        cin>>x;
        i=lower_bound(a,a+n,x)-a;
        int l=0,r=0;
        if(i!=0){
            l=pre[i-1];
        }
        r=pre[n-1]-l;
        int res=(i)*x-l+r-(n-i)*x;
        cout<<res<<"\n";
    }
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
