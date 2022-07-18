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
    int i,j,n;
    cin>>n;
    map<int,int> mp;
    for(i=0;i<=n;i++){
        mp[i]=0;
    }
    for(i=0;i<n;i++){
        int d;
        cin>>d;
        mp[d]++;
    }
    int res[n+1]={0},cnt=0,pre=0;
    bool flg=true;
    multiset<int> st;
    for(i=0;i<=n;i++){
        if(flg){
            if(cnt<i-1){
                res[i]=-1;
                flg=false;
            }
            else{
                if(mp[i]!=0){
                    res[i]=pre+mp[i];
                    cnt+=mp[i];
                }
                else{
                    res[i]=pre+mp[i];
                    cnt+=mp[i];
                    if(st.empty()){
                        flg=false;
                    }
                    else{
                        auto it=st.end();
                        it--;
                        pre+=i-*it;
                        st.erase(it);
                    }
                }
                for(j=0;j<mp[i]-1;j++){
                    st.insert(i);
                }
            }
        }
        else{
            res[i]=-1;
        }
    }
    for(i=0;i<=n;i++){
        cout<<res[i]<<" ";
    }
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