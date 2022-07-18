/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int mod = 1e9 + 7;

int chkpower2(int x){
    return (x&&!(x&x-1));
}

void solve(){
    ll n,k,x=0,y=0;
    cin>>n>>k;
    bool f=0;
    for(ll i1=0;i1<n;i1++){
        ll d;
        cin>>d;
        d+=x;
        //cout<<" "<<d<<" ";
        if(d<k&&f==0){
            y=i1+1;
            f=1;
        }
        x=d-k;
    }
    if(f==1){
        cout<<y;
        return;
    }
    y=x/k;
    cout<<n+y+1;
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
