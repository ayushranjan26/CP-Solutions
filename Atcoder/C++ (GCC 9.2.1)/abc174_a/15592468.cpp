/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
using namespace std;

    int chkpower2(int x){
        return (x&&!(x&x-1));
    }


    void solve(){
        int d1,n;
        cin>>n;
        int a[4]={0};
        for(int i1=0;i1<n;i1++){
            string s1;
            cin>>s1;
            if(s1=="AC"){
                a[0]++;
            }
            if(s1=="WA"){
                a[1]++;
            }
            if(s1=="TLE"){
                a[2]++;
            }
            if(s1=="RE"){
                a[3]++;
            }
        }
        cout<<"AC x "<<a[0]<<"\n"<<"WA x "<<a[1]<<"\n"<<"TLE x "<<a[2]<<"\n"<<"RE x "<<a[3]<<"\n";
    }

    int main()
    {
        //ios::sync_with_stdio(0);
        //cin.tie(0);

        int t;
       t=1;//cin>>t;
        while(t--){
            solve();
            cout<<"\n";
        }
        return 0;
    }
