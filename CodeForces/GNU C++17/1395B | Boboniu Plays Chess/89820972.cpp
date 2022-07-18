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
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    cout<<x<<" "<<y<<"\n";
    cout<<x<<" "<<m<<"\n";
    bool flg=true;
    for(int i1=m;i1>0;i1--){
        if(flg){
            for(int i2=1;i2<=n;i2++){
                if(i2==x&&i1==y){
                    continue;
                }
                if(i2==x&&i1==m){
                    continue;
                }
 
                    cout<<i2<<" "<<i1<<"\n";
 
            }
            flg=false;
        }
        else{
            for(int i2=n;i2>0;i2--){
                if(i2==x&&i1==y){
                    continue;
                }
                if(i2==x&&i1==m){
                    continue;
                }
 
                    cout<<i2<<" "<<i1<<"\n";
 
            }
            flg=true;
        }
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