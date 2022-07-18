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
    int n;
    cin>>n;
    string s;
    char mat[n][n];
    for(int i1=0;i1<n;i1++){
        cin>>s;
        for(int i2=0;i2<n;i2++){
            mat[i1][i2]=s[i2];
        }
    }
    char s1,s2,f1,f2;
    s1=mat[0][1];
    s2=mat[1][0];
    f1=mat[n-1][n-2];
    f2=mat[n-2][n-1];
    if(s1==s2&&s1=='1'&&f1==f2&&f1=='0'){
        cout<<"0";
        return;
    }
    if(s1==s2&&s1=='0'&&f1==f2&&f1=='1'){
        cout<<"0";
        return;
    }
    if(s1==s2&&f1==f2&&s1==f1){
        cout<<"2\n";
        cout<<"1 2\n"<<"2 1";
        return;
    }
    if(s1==s2&&f1!=f2){
        cout<<"1\n";
        if(s1==f1){
            cout<<n<<" "<<n-1;
        }
        else{
            cout<<n-1<<" "<<n;
        }
        return;
    }
    if(f1==f2&&s1!=s2){
        cout<<"1\n";
        if(f1==s1){
            cout<<1<<" "<<2;
        }
        else{
            cout<<2<<" "<<1;
        }
        return;
    }
    else{
        cout<<"2\n";
        if(s1=='0'){
            cout<<"1 2\n";
        }
        if(s2=='0'){
            cout<<"2 1\n";
        }
        if(f1=='1'){
            cout<<n<<" "<<n-1;
        }
        if(f2=='1'){
            cout<<n-1<<" "<<n;
        }
        return;
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