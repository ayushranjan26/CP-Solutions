/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}
const int Nmax = 1e6 + 5;
ll mod = 1e9 + 7;

int ans[10000006];

void solve(){
    string s1;
    cin>>s1;
    int q,n=s1.size();
    cin>>q;
    int a[q];
    for(int i1=0;i1<q;i1++){
        cin>>a[i1];
    }
    
    ans[n]=-2;
    stack<int> st1;
    for(int i1=n-1;i1>=0;i1--){
        if(s1[i1]==')'){
             st1.push(i1);
             ans[i1]=ans[i1+1];
        }
        else{
            if(!st1.empty()){
                ans[i1]=st1.top();
                st1.pop();
            }
            else{
                ans[i1]=-2;
            }
        }
    }
    for(int i1=0;i1<q;i1++){
        cout<<ans[a[i1]-1]+1<<"\n";
    }
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
