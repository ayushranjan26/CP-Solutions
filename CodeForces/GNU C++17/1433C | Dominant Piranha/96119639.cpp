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
    int a[n];
    int ma=0;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        ma=max(a[i1],ma);
    }
 
    for(int i1=0;i1<n;i1++){
        if(a[i1]==ma){
            if(i1==0){
                if(a[i1+1]<a[i1]){
                    cout<<i1+1;
                    return;
                }
            }
            else if(i1==n-1){
                if(a[i1-1]<a[i1]){
                    cout<<i1+1;
                    return;
                }
            }
            else{
                if(a[i1+1]<a[i1]||a[i1]>a[i1-1]){
                    cout<<i1+1;
                    return;
                }
            }
        }
    }
    cout<<"-1";
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}