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
    int n,m,d1;
    cin>>n>>m;
    int a[1001]={0};
    for(int i1=0;i1<n;i1++){
        cin>>d1;
        a[d1]++;
    }
    int ans=0;
    for(int i1=0;i1<m;i1++){
        cin>>d1;
        if(a[d1]>0){
            ans=d1;
            //cout<<"--"<<d1;
        }
    }
    if(ans){
        cout<<"YES\n"<<"1 "<<ans;
        return;
    }
    cout<<"NO";
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