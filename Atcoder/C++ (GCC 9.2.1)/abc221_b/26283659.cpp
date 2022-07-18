#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e7+9;
int rec(int idx,string a,string b,string& s){
    if(idx==s.size()){
        int a1=0,b1=0;
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());
        if(a.size()>0)
            a1=stoi(a);
        if(b.size()>0)
            b1=stoi(b);
        if(a[0]!='0'&&b[0]!='0'&&a1>0&&b1>0){
            return a1*b1;
        }
        return 0;
    }
    else{
        return max(rec(idx+1,a+s[idx],b,s), rec(idx+1,a,b+s[idx],s));
    }
}
void solve(){
    int i,j,k;
    string n;
    cin>>n;
    cout<<rec(0,"","",n);
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
