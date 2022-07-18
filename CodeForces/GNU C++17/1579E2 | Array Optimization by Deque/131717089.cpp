#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
using namespace __gnu_pbds;
 
 
typedef pair<int, int> node;
typedef tree<node, null_type, less<node>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 998244353;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    ordered_set s;
    int ans=0;
    for(i=0;i<n;i++){
        cin>>k;
        int ls,grtr;
        ls=s.order_of_key(node(k,0));
        grtr=i-s.order_of_key(node(k,n));
        ans+=min(ls,grtr);
        s.insert(node(k,i));
    }
    cout<<ans;
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