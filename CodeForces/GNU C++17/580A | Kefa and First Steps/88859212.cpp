/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
int rec(int n){
 
}
 
 
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    int ans=0,ma=0;
    bool flag=false;
    for(int i1=1;i1<n;i1++){
        if(a[i1]>=a[i1-1]){
            ma++;
        }
        else{
            ans=max(ma,ans);
            flag=false;
            ma=0;
        }
    }
    ans=max(ma,ans);
    cout<<ans+1;
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
   // cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}