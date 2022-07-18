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
    string a,b;
    cin>>n;
    cin>>a>>b;
    int i=0;
    int ans=0;
    while(i<n){
        if(a[i]!=b[i]){
            ans++;
        }
        i++;
    }
    i=0;
    while(i<n-1){
        if(a[i]!=b[i]&&a[i+1]!=b[i+1]&&a[i]!=a[i+1]){
            //cout<<i<<" ";
            ans--;
            i+=2;
        }
        else{
            i++;
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