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
    int n,k,x=0,y=0;
    cin>>n;
    if(n==1){
        cout<<"1";
        return;
    }
    if(chkpower2(n)){
        cout<<"-1";
        return;
    }
    else{

        int i=4;
        cout<<"2 3 1 ";
        while(i<=n){
            if(chkpower2(i)){
                cout<<i+1<<" "<<i<<" ";
                i+=2;
            }
            else{
                cout<<i<<" ";
                i++;
            }
        }
    }
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
