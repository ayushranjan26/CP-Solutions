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
    ll ans=0;
    string s1;
    cin>>s1;
    for(int i1=0;i1<s1.size();i1++){
        int x=s1[i1]-'0';
        ans+=x;
    }
    if(ans%9==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return;
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
