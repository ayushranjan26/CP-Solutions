#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll M =1000000007;
string minstring(string s){
    int n;
    n=s.size();
    if(n%2){
        return s;
    }
    string s1,s2;
    s1=s.substr(0,n/2);
    s2=s.substr(n/2,n/2);
    s1=minstring(s1);
    s2=minstring(s2);
    return min(s1+s2,s2+s1);
}
void solve()
{
    int i,j,k,l,n;
    string a,b;
    cin>>a>>b;
    a=minstring(a);
    b=minstring(b);
    if(a==b){
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
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
 