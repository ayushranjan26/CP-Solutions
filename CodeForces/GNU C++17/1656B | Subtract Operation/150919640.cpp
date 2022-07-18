#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n,k;
    cin>>n>>k;
    int a[n];
    set<int> st;
    for(i=0;i<n;i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    if(n==1){
        if(*st.begin()==k){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        auto it=st.begin();
        while(it!=st.end()){
            if(st.find(*it+k)!=st.end()){
                cout<<"YES";
                return;
            }
            it++;
        }
        cout<<"NO";
    }
    return;
}
 
int32_t main(){
    IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 