/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int n;
    cin>>n;
    if(n<=30){
        cout<<"NO";
    }
    else
    {
        if(n==36){
            cout<<"YES\n";
            cout<<"6 10 15 "<<n-6-10-15;
        }
        else{
            if(n==40){
                cout<<"YES\n";
                cout<<"6 10 15 "<<n-6-10-15;
            }
            else{
                if(n==44){
                    cout<<"YES\n";
                    cout<<"6 10 15 "<<n-6-10-15;
                }
                else{
                    cout<<"YES\n";
                    cout<<"6 10 14 "<<n-6-10-14;
                }
            }
        }
    }
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
   // cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}