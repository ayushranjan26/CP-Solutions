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
 
void solve(){
    int i,j,k,n,l,r,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int pre[n+1]={0};
    for(i=1;i<=n;i++){
        if(s[i-1]=='+'){
            if(i%2==1){
                pre[i]=pre[i-1]+1;
            }
            else{
                pre[i]=pre[i-1]-1;
            }
        }
        else{
            if(i%2==1){
                pre[i]=pre[i-1]-1;
            }
            else{
                pre[i]=pre[i-1]+1;
            }
        }
    }
 
    while(q--){
        cin>>l>>r;
        if(pre[r]-pre[l-1]==0){
            cout<<"0";
        }
        else if((r-l+1)%2){
            cout<<"1";
        }
        else{
            cout<<"2";
        }
        cout<<endl;
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