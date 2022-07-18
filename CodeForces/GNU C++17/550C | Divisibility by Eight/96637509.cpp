/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
int dp[150][3];
void solve(){
    string n;
    cin>>n;
    vector<string> alln;
    for(int i1=0;i1<1000;i1++){
        int n;
        if(i1%8==0){
            string s1;
            s1=to_string(i1);
            alln.push_back(s1);
        }
    }
    for(int i1=0;i1<alln.size();i1++){
        int i=0;
        for(int i2=0;i2<n.size();i2++){
            if(n[i2]==alln[i1][i]){
                i++;
            }
            if(i==alln[i1].size()){
                cout<<"YES\n";
                cout<<alln[i1];
                return;
            }
        }
    }
    cout<<"NO";
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}