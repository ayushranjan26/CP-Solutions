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
    string s1;
    int a[140]={0};
    for(int i=0;i<n;i++){
            cin>>s1;
        for(int j=0;j<s1.size();j++){
            a[s1[j]]++;
        }
    }
    for(int i1=0;i1<140;i1++){
        if(a[i1]%n!=0){
            cout<<"NO";//<<a[i1]<<" "<<i1;
            return;
        }
    }
    cout<<"YES";
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