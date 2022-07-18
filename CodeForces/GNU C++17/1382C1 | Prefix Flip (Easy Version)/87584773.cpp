/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve()
{
    int n,ans=0;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    vector<int> v1;
    for(int i1=n-1;i1>=0;i1--){
        if(s1[i1]!=s2[i1]){
            ans+=3;
            v1.push_back(i1+1);
            v1.push_back(1);
            v1.push_back(i1+1);
        }
    }
    cout<<ans<<" ";
    for(int i1=0;i1<v1.size();i1++){
        cout<<v1[i1]<<" ";
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