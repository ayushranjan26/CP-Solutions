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
    cin>>n;
    set<string> st;
    int mx=0,idx=0;
    for(i=0;i<n;i++){
        int t;
        string s;
        cin>>s>>t;
        if(st.find(s)==st.end()){
            st.insert(s);
            if(mx<t){
                mx=t;
                idx=i;
            }
        }
    }
    cout<<idx+1;
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

