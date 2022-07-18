#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
int mod=1e9+7;
const int N=200005;
 
void solve(){
    int i,j,k,n;
    string s;
    cin>>n>>s;
    int cr=0,cl=0;
    vector<int> v;
    for(i=0;i<n;i++){
        if(s[i]=='R'){
            cr++;
            v.push_back(i+1);
        }
        if(s[i]=='L'){
            cl++;
            v.push_back(i+1);
        }
    }
    if(cl==0){
        cout<<v[0]<<" "<<v[v.size()-1]+1;
    }
    else if(cr==0){
        cout<<v[v.size()-1]<<" "<<v[0]-1;
    }
    else{
        cout<<v[0]<<" ";
        for(i=0;i<n-1;i++){
            if(s[i]=='R'&&s[i+1]=='L'){
                cout<<i+1;
                return;
            }
        }
    }
    return;
}
 
signed main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}