#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
int mod=1e9+7;
 
void solve(){
    int i,j,k,n,a,b,d1;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int ans=n*a;
    if(b>=0){
        ans+=n*b;
        cout<<ans;
        return;
    }
    vector<int> v1,v0;
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            v1.push_back(i);
        }
        else{
            v0.push_back(i);
        }
    }
    int c1=1;
    for(i=1;i<v1.size();i++){
        if(v1[i]!=v1[i-1]+1){
            c1++;
        }
    }
    int c0=1;
    for(i=1;i<v0.size();i++){
        if(v0[i]!=v0[i-1]+1){
            c0++;
        }
    }
    //cout<<c1<<" "<<c0<<endl;
    d1=min(c1,c0);
    if(v1.size()==0||v0.size()==0){
        ans+=b;
        cout<<ans;
        return;
    }
    ans+=b*(d1+1);
    cout<<ans;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}