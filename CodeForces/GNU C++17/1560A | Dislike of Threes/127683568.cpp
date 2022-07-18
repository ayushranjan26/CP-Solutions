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
 
vector<int> v;
 
void solve(){
    int i,j,k,n,m;
    cin>>k;
    cout<<v[k-1];
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    int i=1;
    while(v.size()<1005){
        string s=to_string(i);
        if(i%3!=0&&s[s.size()-1]!='3'){
            v.push_back(i);
        }
        i++;
    }
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}