#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
 
void solve(){
    int i,j,k,c,d;
    cin>>c>>d;
    if(c>d){
        swap(c,d);
    }
    if((d-c)%2){
        cout<<"-1";
        return;
    }
    if(c==0&&d==0){
        cout<<"0";
        return;
    }
    if(c==d){
        cout<<"1";
        return;
    }
    cout<<"2";
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