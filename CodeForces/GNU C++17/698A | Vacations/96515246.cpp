/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
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
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
 
    for(int i1=0;i1<n-1;i1++){
        if(a[i1]==a[i1+1]&&a[i1]==1){
            a[i1+1]=0;
        }
        if(a[i1]==a[i1+1]&&a[i1]==2){
            a[i1+1]=0;
        }
        if(a[i1]==1&&a[i1+1]==3){
            a[i1+1]=2;
        }
        if(a[i1]==2&&a[i1+1]==3){
            a[i1+1]=1;
        }
 
    }
    int ans=0;
    for(int i1=0;i1<n;i1++){
        if(a[i1]==0){
            ans++;
        }
    }
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