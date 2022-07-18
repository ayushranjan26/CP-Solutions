/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
//-24 -14
//4 1 24 27 13 1
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
    int a[n],ans=0;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        if(a[i1]==1){
            ans++;
        }
    }
    int f1[n+1],f0[n+1];
    f1[0]=0;
    f0[0]=0;
    for(int i1=0;i1<n;i1++){
        if(a[i1]==0){
            f0[i1+1]=f0[i1]+1;
        }
        else{
            f0[i1+1]=f0[i1];
        }
        if(a[i1]==1){
            f1[i1+1]=f1[i1]+1;
        }
        else{
            f1[i1+1]=f1[i1];
        }
    }
   // cout<<f0[n]<<" ";
    if(f0[n]==0){
        cout<<n-1;
        return;
    }
    int d=0;
    for(int i1=0;i1<=n;i1++){
        for(int i2=i1;i2<=n;i2++){
            int zero=f0[i2]-f0[i1];
            int one=f1[i2]-f1[i1];
            d=max(d,zero-one);
        }
    }
    ans+=d;
    cout<<ans;
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}