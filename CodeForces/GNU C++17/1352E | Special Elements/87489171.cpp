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
    int n,d1;
    cin>>n;
    int a[8001]={0},b[80001]={0},arr[n];
    for(int i1=0;i1<n;i1++){
        cin>>d1;
        arr[i1]=d1;
        a[d1]++;
    }
    int l=0,r;
    while(l<n-1){
        r=l+1;
        int sum=arr[l];
        while(r<n){
            sum+=arr[r];
            //cout<<sum<<" ";
            if(sum>8000){
                break;
            }
            b[sum]=1;
            r++;
        }
        //cout<<"\n";
        l++;
    }
    int ans=0;
    for(int i1=0;i1<8001;i1++){
        if(a[i1]!=0&&b[i1]==1){
                //cout<<i1<<" ";
            ans+=a[i1]*b[i1];
        }
    }
    cout<<ans;
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