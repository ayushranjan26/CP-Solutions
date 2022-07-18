#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
 
void solve()
{
    int i,j,k,l,n;
    cin>>n;
    if(n%2==0){
        for(i=1;i<=n;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
    }
    else{
        if(n==1){
            cout<<1;
            return;
        }
        cout<<"3 1 2 ";
        for(i=4;i<=n ;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
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