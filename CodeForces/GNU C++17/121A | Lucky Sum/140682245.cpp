#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
vector<int> v;
void rec(int sz,string s){
    if(sz==12){
        return ;
    }
    else{
        if(s!=""){
            int d=stoll(s);
            v.push_back(d);
        }
        rec(sz+1,s+'4');
        rec(sz+1,s+'7');
    }
}
void solve(){
    int i,j,l,r,n;
    cin>>l>>r;
    rec(0,"");
    n=v.size();
    sort(v.begin(),v.end());
    int res=0;
    i=lower_bound(v.begin(),v.end(),l)-v.begin();
    if(v[i]>r){
        res=v[i]*(r-l+1);
        cout<<res;
        return;
    }
    res+=v[i]*(v[i]-l+1);
    i++;
    while(v[i]<=r){
        res+=v[i]*(v[i]-v[i-1]);
        i++;
    }
    //cout<<res<<" ";
    res+=v[i]*(r-v[i-1]);
    cout<<res;
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