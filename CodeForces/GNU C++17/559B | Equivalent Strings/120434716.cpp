#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll M =1000000007;
bool rec(string a,string b){
   // cout<<a<<" "<<b<<endl;
    if(a.size()==2){
        if((a[0]==b[0]&&a[1]==b[1])||(a[0]==b[1]&&a[1]==b[0]))
            return true;
        else
            return false;
    }
    if((a.size())%2==1){
        if(a==b)
            return true;
        else
            return false;
    }
    int n=a.size();
    string a1,a2,b1,b2;
    a1=a.substr(0,n/2);
    a2=a.substr(n/2,n-1);
    b1=b.substr(0,n/2);
    b2=b.substr(n/2,n-1);
    return ((rec(a1,b2)&&rec(a2,b1))||(rec(a1,b1)&&rec(a2,b2)));
}
void solve()
{
    int i,j,k,l,n;
    string a,b;
    cin>>a>>b;
    if(rec(a,b)){
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
 