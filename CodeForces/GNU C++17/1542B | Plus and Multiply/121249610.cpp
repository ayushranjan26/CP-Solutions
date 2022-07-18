#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1000000007;
void solve()
{
    ll i,j,k,n,a,b;
    cin>>n>>a>>b;
    if(a==1){
        if((n-1)%b==0){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        return;
    }
    k=1;
    while(k<=n){
        if((n-k)%b==0){
            cout<<"Yes";
            return;
        }
        k=k*a;
    }
    cout<<"No";
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
 