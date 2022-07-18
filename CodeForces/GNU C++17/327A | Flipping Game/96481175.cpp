/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
//-24 -14
//4 1 24 27 13 1
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
void solve(){
    int n;
    cin>>n;
    int a[n],ans=0;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        if(a[i1]==1){
            ans++;
        }
        if(a[i1]==1){
            a[i1]=-1;
        }
        if(a[i1]==0){
            a[i1]=1;
        }
 
    }
    if(ans==n){
        cout<<n-1;
        return;
    }
    int allmax=0,currmax=0;
    for(int i=0;i<n;i++){
        currmax=max(a[i],currmax+a[i]);
        allmax=max(allmax,currmax);
    }
 
    ans+=allmax;
    cout<<ans;
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}