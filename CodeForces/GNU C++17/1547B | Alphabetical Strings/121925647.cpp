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
    int i,j,k,n;
    string s;
    cin>>s;
    n=s.size();
    int l=0,r=n-1;
    for(i=n-1;i>=0;i--){
        char c=(char)('a'+i);
        if(s[l]==c){
            l++;
        }
        else if(s[r]==c){
            r--;
        }
    }
    //cout<<l<<" "<<r<<endl;
    if(l-1==r){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return;
}
 
int main(){
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}