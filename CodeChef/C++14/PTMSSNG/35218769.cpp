/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}


void solve(){
    int n,x,y,x1,y1;
    cin>>n;
    cin>>x>>y;
    for(int i1=0;i1<4*n-2;i1++){
        cin>>x1>>y1;
        x=x^x1;
        y=y^y1;
    }
    cout<<x<<" "<<y;
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
