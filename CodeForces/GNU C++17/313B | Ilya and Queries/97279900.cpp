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
    string s;
    cin>>s;
    int n=s.size();
    int a[n],cnt=0;
    a[0]=0;
    for(int i1=1;i1<n;i1++){
        if(s[i1]==s[i1-1])cnt++;
        a[i1]=cnt;
    }
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return;
}
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}