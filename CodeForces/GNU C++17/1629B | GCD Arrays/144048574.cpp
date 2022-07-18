#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n,k,l,r;
    cin>>l>>r>>k;
    if(l==1&&r==1){
        cout<<"NO";
    }
    else if(r-l+1==1){
        cout<<"YES";
    }
    else{
        int cnt=(r-l+1)/2;
        if(l%2==1&&(r-l+1)%2==1){
            cnt++;
        }
        if(k>=cnt){
            cout<<"YES";
            return;
        }
        cout<<"NO";
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
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 