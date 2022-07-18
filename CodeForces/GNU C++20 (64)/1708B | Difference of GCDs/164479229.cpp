#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n,l,r;
    cin>>n>>l>>r;
    int res[n];
    for(i=0;i<n;i++){
        j=l%(i+1);
        res[i]=l;
        //cout<<j<<endl;
        if(j!=0){
            res[i]+=(i+1)-j;
        }
        if(res[i]>r){
            cout<<"NO";
            return;
        }
        //res[i]=j;
    }
    cout<<"YES\n";
    for(i=0;i<n;i++){
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
 