#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

vector<int> v[200005];
void solve(){
    int i,j,n,k;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<k;i++){
        for(j=i;j<n;j+=k){
            v[i].push_back(a[j]);
        }
    }
    for(i=0;i<k;i++){
        sort(v[i].begin(),v[i].end());
        int c=0;
        for(j=i;j<n;j+=k){
            a[j]=v[i][c];
            c++;
        }
    }
    bool fg=true;
    for(i=1;i<n;i++){
        if(a[i]<a[i-1]){
            fg=false;
        }
    }
    if(fg){
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
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
