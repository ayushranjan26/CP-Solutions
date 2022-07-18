/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}
int n;


void solve(){
    ll n,d;
    cin>>n>>d;
    ll a[n][2];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1][0]>>a[i1][1];
    }
    ll ans=0;
    for(int i1=0;i1<n;i1++){
        if(a[i1][0]*a[i1][0]+a[i1][1]*a[i1][1]<=d*d){
               // cout<<a[i1][0]<<" "<<a[i1][1]<<endl;

            ans++;
        }
    }
    cout<<ans;
    return;
}

int main()
{
   // ios::sync_with_stdio(0);
   // cin.tie(0);

    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
