#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e4+1;
const int INF=1e9+3;
 
void solve(int tc){
    int i,j,k,n,l,r;
    cin>>n;
    string s;
    cin>>s;
    for(i=n/2;i<n;i++){
        if(s[i]=='0'){
            cout<<1<<" "<<i+1<<" "<<1<<" "<<i<<endl;
            return;
        }
    }
    for(i=0;i<n/2;i++){
        if(s[i]=='0'){
            cout<<i+1<<" "<<n<<" "<<i+2<<" "<<n<<endl;
            return;
        }
    }
    cout<<1<<" "<<n-1<<" "<<2<<" "<<n<<endl;
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve(tc);
        cout<<"\n";
        tc++;
    }
    return 0;
}