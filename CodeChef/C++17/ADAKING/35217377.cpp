/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}


void solve(){
     int k,d1;
     cin>>k;
     k=64-k;
     char a[8][8];
     a[7][7]='O';
     bool bk =false;
     for(int i1=0;i1<8;i1++){
        for(int i2=0;i2<8;i2++){
            if(k--){
                a[i1][i2]='X';
            }
            else{
                    d1=i2;
                for(int i3=i1;i3<8;i3++){
                    for(int i4=d1;i4<8;i4++){
                        if(i3==7&&i4==7){
                            break;
                        }
                        a[i3][i4]='.';
                    }
                    d1=0;
                }
                bk=true;
                break;
            }
        }
        if(bk){
            break;
        }
     }
     for(int i1=0;i1<8;i1++){
        for(int i2=0;i2<8;i2++){
            cout<<a[i1][i2];
        }
        cout<<endl;
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
