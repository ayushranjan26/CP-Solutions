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
    int r1,r2,c1,c2,d1,d2;
    string s1,s2;
    cin>>s1>>s2;
    int cnt=0;
    if(s1.size()!=s2.size()){
        cout<<"NO";
        return;
    }
    else{
            int a[150]={0},b[150]={0};
        for(int i1=0;i1<s1.size();i1++){
                a[s1[i1]]++,
                b[s2[i1]]++;
            if(s1[i1]!=s2[i1]){
                cnt++;
            }
        }
        if(cnt!=2){
            cout<<"NO";
            return;
        }
        else{
            bool f=1;
            for(int i1=0;i1<150;i1++){
                if(a[i1]!=b[i1]){
                    f=0;
                    cout<<"NO";
                    return;
                }
            }
            cout<<"YES";
        }
    }
 
    return;
}
 
int main()
{
  //  ios::sync_with_stdio(0);
 //   cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}