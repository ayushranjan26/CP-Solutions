#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 998244353;

vector<int> pos[200005];
void solve(){
    int i,j,n,q;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        pos[a[i]].push_back(i);
    }
    cin>>q;
    while(q--){
        int l,r,x;
        cin>>l>>r>>x;
        l--,r--;
        i=lower_bound(pos[x].begin(),pos[x].end(),l)-pos[x].begin();
        j=upper_bound(pos[x].begin(),pos[x].end(),r)-pos[x].begin();
        //cout<<i<<" - "<<j<<endl;
        cout<<j-i<<endl;
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

