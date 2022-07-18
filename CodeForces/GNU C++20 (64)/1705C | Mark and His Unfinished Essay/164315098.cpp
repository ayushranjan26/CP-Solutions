#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n,c,q;
    cin>>n>>c>>q;
    string s;
    cin>>s;
    int l[c],r[c],sz[c];
    for(i=0;i<c;i++){
        cin>>l[i]>>r[i];
        sz[i]=r[i]-l[i]+1;
    }
 
    while(q--){
        int k;
        cin>>k;
        while(k>n){
            int ln=n;
            for(i=0;i<c;i++){
                ln+=sz[i];
                if(ln>=k){
                    //cout<<ln<<" ";
                    ln-=sz[i];
                    k=k-ln;
                    k=l[i]+k-1;
                    break;
                }
            }
            //cout<<k<<endl;
        }
        cout<<s[k-1]<<endl;
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
 