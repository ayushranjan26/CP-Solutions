#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
int mod=1e9+7;
 
void solve(){
    int i,j,k,n;
    string s;
    cin>>n;
    int a[n];
    vector<int> ans;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[n-1]==0){
        for(i=1;i<=n+1;i++){
            cout<<i<<" ";
        }
    }
    else if(a[0]==1){
        cout<<n+1<<" ";
        for(i=1;i<=n;i++){
            cout<<i<<" ";
        }
    }
    else{
        bool flg=false;
        for(i=0;i<n-1;i++){
            if(a[i]==0&&a[i+1]==1){
                flg=true;
            }
        }
        if(flg){
            for(i=0;i<n;i++){
                cout<<i+1<<" ";
                if(a[i]==0&&a[i+1]==1&&flg){
                    flg=false;
                    cout<<n+1<<" ";
                }
            }
        }
        else{
            cout<<"-1";
        }
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}