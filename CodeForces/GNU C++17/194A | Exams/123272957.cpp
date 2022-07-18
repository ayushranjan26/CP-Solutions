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
    cin>>n>>k;
    int x,y;
    y=k%n;
    x=n-y;//x is k/n and y is k/n + 1
    int ans=0;
    if(k/n<=2){
        ans+=x;
    }
    if(k/n+1<=2){
        ans+=y;
    }
    //cout<<x<<" "<<y<<" ";
    cout<<ans;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        //cout<<"\n";
        cout<<endl;
        tc++;
    }
    return 0;
}