/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
string s1;
int rec(int l,int r,int cnt){
    int x1=0,x2=0;
    if(l==r-1){
        int c1=s1[l]-'a';
        if(c1==cnt){
            return 0;
        }
        else{
            return 1;
        }
    }
    for(int i1=l;i1<(r+l)/2;i1++){
        int c1=s1[i1]-'a';
        if(c1!=cnt){
            x1++;
        }
    }
    x1+=rec((l+r)/2,r,cnt+1);
    for(int i1=(r+l)/2;i1<r;i1++){
        int c1=s1[i1]-'a';
        if(c1!=cnt){
            x2++;
        }
    }
    x2+=rec(l,(l+r)/2,cnt+1);
    return min(x1,x2);
}
void solve(){
    int n;
    cin>>n;
    cin>>s1;
    cout<<rec(0,n,0);
    return;
}
 
int main()
{
  //  ios::sync_with_stdio(0);
 //   cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}