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
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int suf[n+1]={0},pre[n+1]={0};
    for(i=0;i<n;i++){
        suf[i]=n-a[i];
        pre[i+1]=n-a[i];
    }
    for(i=n-2;i>=0;i--){
        suf[i]+=suf[i+1];
    }
    for(i=1;i<=n;i++){
        pre[i]+=pre[i-1];
    }

    for(i=0;i<n;i++){
        int mx,mn;
        j=lower_bound(a.begin(),a.end(),i+1)-a.begin();
        mn=n-j;
        mx=mn+suf[j];
        j=lower_bound(a.begin(),a.end(),i)-a.begin();
        mx+=pre[j];
        //cout<<j<<" = "<<pre[j]<<endl;
        cout<<mn<<" "<<mx<<"\n";
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
        //cout<<"\n";
        tc++;
    }
    return 0;
}
