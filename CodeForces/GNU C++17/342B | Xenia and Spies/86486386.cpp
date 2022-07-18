/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int n,m,s,f;
    cin>>n>>m>>s>>f;
    int a[m][3];
    for(int i1=0;i1<m;i1++){
        cin>>a[i1][0]>>a[i1][1]>>a[i1][2];
    }
    int diff=abs(s-f);
    if(s<f){
            int i=0;
 
        for(int i1=1;i1<=a[m-1][0];i1++){
            if(i1==a[i][0]){
                if(s+1<a[i][1]||s>a[i][2]){
                    cout<<"R";
                    diff--;
                    s++;
                }
                else{
                    cout<<"X";
                }
                i++;
            }
            else{
               cout<<"R";
               diff--;
               s++;
            }
            if(diff==0){
                break;
            }
        }
        while(diff--){
            cout<<"R";
        }
    }
    if(s>f){
            int i=0;
        for(int i1=1;i1<=a[m-1][0];i1++){
            if(i1==a[i][0]){
                if(s<a[i][1]||s-1>a[i][2]){
                    cout<<"L";
                    diff--;
                    s--;
                }
                else{
                    cout<<"X";
                }
                i++;
            }
            else{
               cout<<"L";
               diff--;
               s--;
            }
            if(diff==0){
                break;
            }
        }
        while(diff--){
            cout<<"L";
        }
    }
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}