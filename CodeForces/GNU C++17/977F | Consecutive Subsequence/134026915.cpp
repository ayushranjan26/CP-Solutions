 #include <bits/stdc++.h>
 
#define ll long long
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
    int a[n];
    map<int,int> dp;
    for(i=0;i<n;i++){
        cin>>a[i];
        dp[a[i]]=1;
    }
    set<int> st;
    int res=1;
    j=0;
    for(i=0;i<n;i++){
        if(st.find(a[i]-1)!=st.end()){
            dp[a[i]]=dp[a[i]-1]+1;
            if(res<dp[a[i]]){
                res=dp[a[i]];
                j=i;
            }
        }
        st.insert(a[i]);
    }
    vector<int> v;
    int num=a[j];
    for(i=j;i>=0;i--){
        if(a[i]==num){
            v.push_back(i+1);
            num--;
        }
    }
    reverse(v.begin(),v.end());
    cout<<res<<"\n";
    for(i=0;i<res;i++){
        cout<<v[i]<<" ";
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