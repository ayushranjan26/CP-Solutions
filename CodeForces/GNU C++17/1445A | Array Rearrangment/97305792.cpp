/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
#define IOS cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
void solve(){
    int n,x;
    cin>>n>>x;
    int a[n],b[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    for(int i1=0;i1<n;i1++){
        cin>>b[i1];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i1=0;i1<n;i1++){
        if(a[i1]+b[n-i1-1]>x){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return;
}
int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}