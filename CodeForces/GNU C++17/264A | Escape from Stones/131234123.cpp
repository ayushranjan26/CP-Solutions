#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod = 1e7+9;
 
void solve(){
    int i,j,k,n;
    string s;
    cin>>s;
    n=s.size();
    list<int> l;
    list <int>::iterator it;
    it=l.begin();
    l.insert(it,1);
    for(i=0;i<n-1;i++){
        if(s[i]=='l'){
            it--;
            l.insert(it,i+2);
        }
        else{
            l.insert(it,i+2);
        }
    }
    for(it=l.begin();it!=l.end();it++){
        cout<<*it<<"\n";
    }
    return;
 
}
 
int32_t main(){
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