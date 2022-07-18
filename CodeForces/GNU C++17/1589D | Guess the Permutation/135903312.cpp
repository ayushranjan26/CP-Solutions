#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
int ask(int l,int r){
    cout<<"? "<<l<<" "<<r<<endl;
    int in;
    cin>>in;
    return in;
}
void solve(){
    int n;
    cin>>n;
    int i,j,k,tot;
    tot=ask(1,n);
 
    k=n;
    int lo=1,hi=n;
    while(lo<=hi){
        int m=(lo+hi)/2;
        int in=ask(m,n);
        if(in==0){
            k=min(k,m);
            hi=m-1;
        }
        else{
            lo=m+1;
        }
    }
    int len=ask(1,k)-ask(1,k-1);
    j=k-len;
    len=ask(1,j-1)-ask(1,j-2);
    i=j-len-1;
    cout<<"! "<<i<<" "<<j<<" "<<k<<endl;
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