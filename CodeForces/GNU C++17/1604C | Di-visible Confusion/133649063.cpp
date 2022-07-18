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
    int i,j,n,q;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    for(i=0;i<n;i++){
        bool flg=false;
        for(j=i+2;j>=i+2-cnt;j--){
            if(a[i]%j!=0){
                cnt++;
                flg=true;
                break;
            }
        }
        if(!flg){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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