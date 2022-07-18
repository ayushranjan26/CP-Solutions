/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
using namespace std;
int chkpower2(int x){
    return (x&&!(x&x-1));
}

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int s,n;
        cin>>s>>n;
        if(s==1){
            cout<<"1";
        }
        if(s!=1){
            if(s%2==0){
                if(n>=s){
                    cout<<"1";
                }
                else{
                    if(s%n==0){
                        cout<<s/n;
                    }
                    else{
                        cout<<s/n+1;
                    }
                }
            }
            else{
                s--;
                if(n>=s){
                    cout<<"2";
                }
                else{
                    if(s%n==0){
                        cout<<s/n+1;
                    }
                    else{
                        cout<<s/n+2;
                    }
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
