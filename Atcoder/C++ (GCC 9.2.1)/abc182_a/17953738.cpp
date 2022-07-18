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
    int n,x,t;
    cin>>n>>x>>t;
    int z=n/x;
    if(n%x==0){
        z--;
    }
    z++;
    cout<<z*t;
}

int main()
{
 //   ios::sync_with_stdio(0);
  //  cin.tie(0);

    int t;
    t=1;// cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
