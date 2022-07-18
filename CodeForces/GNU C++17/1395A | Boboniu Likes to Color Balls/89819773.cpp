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
    int r,g,b,w,z=3;
    cin>>r>>g>>b>>w;
    int c1=0,c2=0,c3=0,c4=0;
 
    if(r%2==0){
        c1=1;
    }
    if(g%2==0){
        c2=1;
    }
    if(b%2==0){
        c3=1;
    }
    if(w%2==0){
        c4=1;
    }
    if(c1+c2+c3+c4>=z){
        cout<<"YES";
        return;
    }
    r--;
    g--;
    b--;
    w+=3;
    c1=0,c2=0,c3=0,c4=0;
    if(r<0||g<0||b<0){
        cout<<"NO";
        return;
    }
    if(r%2==0){
        c1=1;
    }
    if(g%2==0){
        c2=1;
    }
    if(b%2==0){
        c3=1;
    }
    if(w%2==0){
        c4=1;
    }
    if(c1+c2+c3+c4>=z){
        cout<<"YES";
        return;
    }
    cout<<"NO";
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