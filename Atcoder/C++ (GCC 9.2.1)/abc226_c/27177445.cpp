 #include <bits/stdc++.h>

#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;


void solve(){
    int i,j,n;
    cin>>n;
    int x[n],y[n];
    set<pii> st;
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            int d=__gcd(abs(x[i]-x[j]),abs(y[i]-y[j]));
            int x1=(x[i]-x[j])/d;
            int y1=(y[i]-y[j])/d;
            st.insert({x1,y1});
            st.insert({-x1,-y1});
        }
    }
    cout<<(st.size());
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
