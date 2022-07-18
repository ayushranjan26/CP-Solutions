#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

void solve(){
    int i,j,n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    set<int> st;
    for(i=0;i<n;i++){
        if(a[i]==b[n-1]){
            st.insert(i+1);
        }
    }
    bool f=false;
    for(i=0;i<k;i++){
        cin>>j;
        if(st.find(j)!=st.end()){
            f=true;
        }
    }
    if(f){
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
