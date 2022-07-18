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
    int n,m,k;
    cin>>n>>m>>k;
    int k1=k;
    k--;
    int r1=1,c1=1;
    bool flg=true;
    while(k--){
        cout<<"2 ";
        cout<<r1<<" "<<c1<<" ";
        if(flg){
            c1++;
            if(c1>m){
                r1++;
                c1=m;
                flg=false;
            }
        }
        else if(!flg){
            c1--;
            if(c1==0){
                r1++;
                c1=1;
                flg=true;
            }
        }
        cout<<r1<<" "<<c1<<"\n";
        if(flg){
            c1++;
            if(c1>m){
                r1++;
                c1=m;
                flg=false;
            }
        }
       else if(!flg){
            c1--;
            if(c1==0){
                r1++;
                c1=1;
                flg=true;
            }
        }
    }
    cout<<n*m-2*(k1-1)<<" ";
 
    while(1){
        cout<<r1<<" "<<c1<<" ";
        if(flg){
            c1++;
            if(c1>m){
                r1++;
                c1=m;
                flg=false;
            }
        }
        else if(!flg){
            c1--;
            if(c1==0){
                r1++;
                c1=1;
                flg=true;
            }
        }
        if(r1>n){
            break;
        }
        cout<<r1<<" "<<c1<<" ";
        if(flg){
            c1++;
            if(c1>m){
                r1++;
                c1=m;
                flg=false;
            }
        }
        else if(!flg){
            c1--;
            if(c1==0){
                r1++;
                c1=1;
                flg=true;
            }
        }
        if(r1>n){
            break;
        }
    }
    return;
}
 
int main()
{
 //   ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}