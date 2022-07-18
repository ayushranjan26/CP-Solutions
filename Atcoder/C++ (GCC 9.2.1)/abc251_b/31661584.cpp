#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(int tc){
    int i,j,k,n,w;
    cin>>n>>w;
    int a[n];
    set<int> st;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=w){
            st.insert(a[i]);
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]<=w){
                st.insert(a[i]+a[j]);
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]<=w){
                    st.insert(a[i]+a[j]+a[k]);
                }
            }
        }
    }
    cout<<st.size();
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve(tc);
        cout<<"\n\n";
        tc++;
    }
    return 0;
}

