#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>


//typedef tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,q;
    cin>>q;
    ordered_set st;
    int sz=0;
    for(i=0;i<q;i++){
        int x,k;
        cin>>j;
        if(j==1){
            cin>>x;
            st.insert(x);
            sz++;
        }
        else if(j==2){
            cin>>x>>k;
            int d=st.order_of_key(x+1LL);
            //cout<<d<<" ";
            if(d-k<0){
                cout<<"-1\n";
            }
            else{
                cout<<*st.find_by_order(d-k)<<"\n";
            }
        }//1 1 2 2 3 3
        else{
            cin>>x>>k;
            int d=st.order_of_key(x);
            //cout<<d<<" ";
            if(d+k-1<sz){
                cout<<*st.find_by_order(d+k-1LL)<<"\n";
            }
            else{
                cout<<"-1\n";
            }
        }
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
