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
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    sort(a.begin(),a.end());
    if(n==1){
        cout<<"0";
        return;
    }
 
    int ans=0;
    for(int i1=a[0];i1<=2*a[n-1];i1++){
            int b[101]={0};
            for(int i=0;i<n;i++){
                b[a[i]]++;
            }
            int k=0;
 
            //cout<<"\n"<<i1<<"\n";
        for(int i2=0;i2<n;i2++){
               // cout<<i2<<" ";
            int d1=i1-a[i2];
      //  cout<<d1<<" ";
            if(d1==a[i2]){
                if(b[d1]>1){
                    b[d1]-=2;
                    k++;
                }
            }
            else if(d1>=0&&b[d1]>0&&b[a[i2]]>0){
                b[d1]--;
                b[a[i2]]--;
                k++;
            }
        }
        ans=max(ans,k);
    }
    cout<<ans;
    return;
}
 
int main()
{
 //   ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}