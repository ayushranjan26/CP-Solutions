#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e4+5;
const int INF=1e18;
 
void solve(){
    int i,j,k;
    cin>>k;
    i=0;
    while((1+i*i)<=k){
        i++;
    }
    i--;
    int row=i,col=i;
    int beg=i*i+1;
    k-=beg;
    if(k<=i){
        row=k;
    }
    else{
        col=i-(k-i);
    }
    cout<<row+1<<" "<<col+1;
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