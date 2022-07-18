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
    int n,m;
    cin>>n>>m;
    int a1[n][m];
    int a2[n][m];
    for(int i1=0;i1<n;i1++){
        for(int i2=0;i2<m;i2++){
            cin>>a1[i1][i2];
        }
    }
    for(int i1=0;i1<m;i1++){
        for(int i2=0;i2<n;i2++){
            cin>>a2[i2][i1];
        }
    }
 
    int x=a1[0][0];
    int c1=0;
    for(int i1=0;i1<n;i1++){
        for(int i2=0;i2<m;i2++){
            if(a2[i1][i2]==x){
                x=i2;
                c1=1;
                break;
            }
        }
        if(c1){
            break;
        }
    }
    
    vector<int> v1;
    for(int i=0;i<n;i++){
        int d=a2[i][x];
        for(int i1=0;i1<n;i1++){
            if(a1[i1][0]==d){
                v1.push_back(i1);
                break;
            }
            
        }
    }
    
    for(int i1=0;i1<n;i1++){
        for(int i2=0;i2<m;i2++){
            cout<<a1[v1[i1]][i2]<<" ";
        }
        cout<<"\n";
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