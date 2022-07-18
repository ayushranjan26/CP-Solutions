/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
//#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve()
{
    string s1;
    cin>>s1;
    int n=s1.size();
    int i1=0;
    int a[26]={0};
    while(i1<n){
        char c1=s1[i1];
        int d1=s1[i1]-'a';
        if(a[d1]!=-1){
            a[d1]=1;
        }
        int cnt=0;
        while(i1<n){
            if(s1[i1]==c1){
                cnt++;
            }
            else{
                break;
            }
            i1++;
        }
        if(cnt%2==1){
            a[d1]=-1;
        }
    }
    for(int i1=0;i1<26;i1++){
        if(a[i1]==-1){
            char c1=i1+'a';
            cout<<c1;
        }
    }
 return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}