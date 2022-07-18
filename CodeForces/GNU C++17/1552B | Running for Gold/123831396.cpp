#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n][5];
    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int winner=0;
    for(i=1;i<n;i++){
        int cnt=0;
        for(j=0;j<5;j++){
            if(a[winner][j]>a[i][j]){
                cnt++;
            }
        }
        if(cnt>=3){
            winner=i;
        }
    }
    for(i=0;i<winner;i++){
        //if(i==winner)continue;
        int cnt=0;
        for(j=0;j<5;j++){
            if(a[winner][j]>a[i][j]){
                cnt++;
            }
        }
        if(cnt>=3){
            cout<<"-1";
            return;
        }
    }
    cout<<winner+1;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}
 
 