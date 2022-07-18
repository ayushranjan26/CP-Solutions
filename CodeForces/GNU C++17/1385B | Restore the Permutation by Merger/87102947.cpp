/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
  int n;
  cin>>n;
  int a[2*n];
  vector<int> v1;
    int c[100]={0};
  for(int i1=0;i1<2*n;i1++){
    cin>>a[i1];
    c[a[i1]]++;
    if(c[a[i1]]==1){
        v1.push_back(a[i1]);
    }
  }
  for(int i1=0;i1<n;i1++){
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