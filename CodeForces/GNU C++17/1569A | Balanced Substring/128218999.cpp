#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
 
void solve(){
    int i,j,k,n;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++){
        int ca=0,cb=0;
        for(j=i;j<n;j++){
            if(s[j]=='a'){
                ca++;
            }
            if(s[j]=='b'){
                cb++;
            }
            if(ca==cb&&ca!=0){
                cout<<i+1<<" "<<j+1;
                return;
            }
        }
    }
    cout<<"-1 -1";
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