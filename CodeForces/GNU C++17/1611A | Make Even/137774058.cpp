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
    int i,j,n,m;
    string s;
    cin>>s;
    int a[s.size()];
    bool f=false;
    for(i=0;i<s.size();i++){
        a[i]=(int)(s[i]-'0');
        if(a[i]%2==0){
            f=true;
        }
    }
    if(f){
        if(a[s.size()-1]%2==0){
            cout<<"0";
        }
        else if(a[0]%2==0){
            cout<<"1";
        }
        else{
            cout<<"2";
        }
    }
    else{
        cout<<"-1";
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