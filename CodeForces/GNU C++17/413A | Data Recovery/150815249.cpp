#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n,m,mn,mx;
    cin>>n>>m>>mn>>mx;
    int a[m];
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    int mn1=a[0],mx1=a[0];
    for(i=0;i<m;i++){
        mn1=min(mn1,a[i]);
        mx1=max(mx1,a[i]);
    }
    if(mn1<mn||mx<mx1){
        cout<<"Incorrect";
        return;
    }
    if(n-m>=2){
        cout<<"Correct";
        return;
    }
    if(n==m){
        if(mx1==mx&&mn1==mn){
            cout<<"Correct";
        }
        else{
            cout<<"Incorrect";
        }
        return;
    }
    else{
        if(mx1==mx||mn1==mn){
            cout<<"Correct";
        }
        else{
            cout<<"Incorrect";
        }
    }
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 