#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n],res=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    set<int> st;
    for(i=0;i<n;i++){
        st.insert(i+1);
    }
 
    for(i=0;i<n;i++){
        if(st.find(a[i])!=st.end()){
            st.erase(a[i]);
            a[i]=-1;
        }
    }
 
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(a[i]==-1){
            continue;
        }
        else{
            int d=*st.begin();
            if(d>((a[i]+1)/2-1)){
                cout<<"-1";
                return;
            }
            else{
                res++;
                st.erase(st.begin());
            }
        }
    }
 
    cout<<res;
    return;
}
 
int32_t main(){
    //IOS;
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