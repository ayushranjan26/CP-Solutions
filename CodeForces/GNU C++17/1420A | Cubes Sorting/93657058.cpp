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
    int b[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        b[i1]=a[i1];
    }
    sort(a,a+n);
    for(int i1=0;i1<n;i1++){
        if(a[n-1-i1]!=b[i1]){
            cout<<"YES";
            return;
        }
        if(i1<n-1){
            if(a[i1]==a[i1+1]){
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";
    return;
}
 
int main()
{
  //  ios::sync_with_stdio(0);
 //   cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}