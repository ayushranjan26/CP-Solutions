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
    int n , t;
    cin>>n>>t;
    t--;
    int a[n-1];
    int p[n]={0};
    for(int i1=0;i1<n-1;i1++){
        cin>>a[i1];
        p[i1]=i1+a[i1];
    }
    int i=0;
    while(n--){
        if(i==t){
            cout<<"YES";
            return;
        }
        i=p[i];
    }
    cout<<"NO";
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