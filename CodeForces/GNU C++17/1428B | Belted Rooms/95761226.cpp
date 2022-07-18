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
    string s1;
    cin>>s1;
    int cc=0,ac=0,bc=0;
    for(int i1=0;i1<n;i1++){
        if(s1[i1]=='-'){
            bc++;
        }
        if(s1[i1]=='>'){
            cc++;
        }
        if(s1[i1]=='<'){
            ac++;
        }
    }
    if(cc==0){
        cout<<n;
        return;
    }
    if(ac==0){
        cout<<n;
        return;
    }
    set<int> s;
    for(int i1=0;i1<n;i1++){
        if(s1[i1]=='-'){
            s.insert(i1);
            s.insert((i1+1)%n);
        }
    }
    cout<<s.size();
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