#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
void solve(){
    int i,j,k;
    string s,t;
    int n,m;
    cin>>s>>t;
    n=s.size(),m=t.size();
    stack<char> stk;
    for(i=0;i<n;i++){
        stk.push(s[i]);
    }
    reverse(t.begin(),t.end());
    j=0;
    while(j<m){
        if(stk.empty()){
            cout<<"NO";
            return;
        }
        else if(stk.top()==t[j]){
            stk.pop();
            j++;
        }
        else{
 
            stk.pop();
            if(!stk.empty()){
                stk.pop();
            }
 
        }
    }
    cout<<"YES";
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}