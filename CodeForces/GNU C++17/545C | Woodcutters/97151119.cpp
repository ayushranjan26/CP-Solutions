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
    int x[n],wl[n];
    for(int i1=0;i1<n;i1++){
        cin>>x[i1]>>wl[i1];
    }
    int ans=0;
    for(int i1=1;i1<n-1;i1++){
        if(abs(x[i1]-x[i1-1])>wl[i1]){
            ans++;
            continue;
        }
        if(abs(x[i1]-x[i1+1])>wl[i1]){
            ans++;
            x[i1]=x[i1]+wl[i1];
        }
    }
    if(n==1){
        cout<<"1";
        return;
    }
    cout<<ans+2;
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