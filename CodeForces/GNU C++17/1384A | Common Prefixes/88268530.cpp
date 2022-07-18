/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int n;
    cin >> n;
    string s="";
    vector<int> v1(n);
    for (int i1 = 0; i1 < n; ++i1){
        cin>>v1[i1];
    }
    for(int i1=0;i1<100;i1++){
        s+='a';
    }
    cout << s << endl;
    for(int i1=0;i1<n;i1++){
        if(s[v1[i1]]=='a'){
            s[v1[i1]]='b';
        }
        else{
            s[v1[i1]]='a';
        }
        cout<<s<<"\n";
    }
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
   // cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
       // cout<<"\n";
    }
    return 0;
}