#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
 
void solve(){
    ll i,j,n,a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0 0";
    }
    else{
        if(a<b){
            swap(a,b);
        }
        i=abs(a-b);
        j=a%i;
        j=(i-j)%i;
        n=min(j,a%i);
        cout<<i<<" "<<n;
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
 