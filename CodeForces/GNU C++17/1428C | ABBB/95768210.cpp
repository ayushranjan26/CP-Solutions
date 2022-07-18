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
    string s1;
    cin>>s1;
    stack<char> st;
    for(int i1=0;i1<s1.size();i1++){
        if(st.empty()){
            st.push(s1[i1]);
        }
        else{
            if(st.top()=='A'&&s1[i1]=='B'){
                st.pop();
            }
            else if(st.top()=='B'&&s1[i1]=='B'){
                st.pop();
            }
            else{
                st.push(s1[i1]);
            }
        }
    }
    cout<<st.size();
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