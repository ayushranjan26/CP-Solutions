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
    string s;
    int x;
    cin>>s>>x;
    string s1=s;
    for(int i1=0;i1<s1.size();i1++){
        s1[i1]='1';
    }
    
    for(int i1=0;i1<s1.size();i1++){
        if(s[i1]=='0'){
            if(i1+x<s1.size()){
                s1[i1+x]='0';
            }
            if(i1-x>=0){
                s1[i1-x]='0';
            }
        }
    }
    bool flg=1;
    for(int i1=0;i1<s1.size();i1++){
        if(s[i1]=='1'){
            int f=1;
            if(i1+x<s1.size()){
                if(s1[i1+x]=='1'){
                    f=0;
                }
            }
            if(i1-x>=0){
                if(s1[i1-x]=='1'){
                    f=0;
                }
            }
            if(f){
                cout<<"-1 ";
                return;
            }
        }
    }
    cout<<s1;
    return;
}
 
int main()
{
 //   ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}