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
    vector<int>  a(n);
    vector<int>  b(n);
    int m1=10e9,m2=10e9;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        m1=min(m1,a[i1]);
    }
    for(int i1=0;i1<n;i1++){
        cin>>b[i1];
        m2=min(m2,b[i1]);
    }
    int a1[n],b1[n];
    for(int i1=0;i1<n;i1++){
        a1[i1]=a[i1]-m1;
        b1[i1]=b[i1]-m2;
    }
    long long int ans=0;
    for(int i1=0;i1<n;i1++){
        ans+=max(a1[i1],b1[i1]);
    }
    cout<<ans;
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
    //cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}