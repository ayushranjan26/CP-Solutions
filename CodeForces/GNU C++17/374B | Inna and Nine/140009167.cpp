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
    int i,j,n,m;
    string s;
    cin>>s;
    n=s.size();
    set<int> st;
    j=i;
    for(i=1;i<n;i++){
        int x,y;
        x=(int)(s[i]-'0');
        y=(int)(s[i-1]-'0');
        if(x+y==9){
            st.insert(j);
            st.insert(j-1);
        }
        else{
            j++;
        }
        j++;
    }
 
    vector<int> vi;
    auto it=st.begin();
    while(it!=st.end()){
        vi.push_back(*it);
        it++;
    }
    n=vi.size();
    int dp[n];
    for(i=0;i<n;i++){
        dp[i]=1;
    }
    for(i=1;i<n;i++){
        if(vi[i]==vi[i-1]+1){
            dp[i]+=dp[i-1];
            dp[i-1]=0;
        }
    }
    int res=1;
    for(i=0;i<n;i++){
        //cout<<dp[i]<<" ";
        if(dp[i]%2==1){
            res*=((dp[i]+1)/2);
        }
    }
    //cout<<endl;
    cout<<res;
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