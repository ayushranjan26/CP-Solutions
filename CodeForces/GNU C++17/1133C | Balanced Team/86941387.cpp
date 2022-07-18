/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    sort(a,a+n);
    int i=0,j=0,ans=0;
    while(1){
        if(i>=n||j>=n){
            break;
        }
        if(a[j]-a[i]<=5){
            j++;
        }
        ans=max(ans,j-i);
        if(a[j]-a[i]>5){
            i++;
        }
        ans=max(ans,j-i);
    }
    cout<<ans;
    return;
}
 
int main()
{
    ios::sync_with_stdio(0);
   cin.tie(0);
 
    int t;
   t=1;// cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}