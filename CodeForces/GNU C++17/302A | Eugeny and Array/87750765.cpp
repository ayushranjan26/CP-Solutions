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
    int n,m,cnt1=0,cntn1=0;
    cin>>n>>m;
    int a[m][2];
    int arr[n];
    for(int i1=0;i1<n;i1++){
        cin>>arr[i1];
        if(arr[i1]>0){
            cnt1++;
        }
        else{
            cntn1++;
        }
    }
    for(int i1=0;i1<m;i1++){
        cin>>a[i1][0]>>a[i1][1];
        a[i1][0]--,a[i1][1]--;
    }
    for(int i1=0;i1<m;i1++){
        int d1=a[i1][1]-a[i1][0];
        if(d1%2==0){
            cout<<"0";
        }
        else{
            if(cnt1>=d1/2+1&&cntn1>=d1/2+1){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<"\n";
    }
}
 
int main()
{
   // ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
   t=1;// cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}