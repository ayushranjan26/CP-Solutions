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
    string s;
    s=to_string(n);
    int ans=(n%10-1)*10;
    ans+=(s.size()*(s.size()+1))/2;
    cout<<ans;
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