#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(n%2==0){
        for(i=0;i<n;i+=2){
            cout<<a[i+1]<<" "<<-a[i]<<" ";
        }
    }
    else{
        vector<int> v;
        for(i=3;i<n;i++){
            v.push_back(a[i]);
        }
        if(a[0]*a[1]>0){
            cout<<a[2]<<" "<<a[2]<<" "<<-(a[0]+a[1]);
        }
        else if(a[1]*a[2]>0){
            cout<<-(a[2]+a[1])<<" "<<a[0]<<" "<<a[0];
        }
        else{
            cout<<a[1]<<" "<<-(a[2]+a[0])<<" "<<a[1];
        }
        cout<<" ";
        n=n-3;
        for(i=0;i<n;i+=2){
            cout<<v[i+1]<<" "<<-v[i]<<" ";
        }
 
    }
    return;
}
 
int32_t main(){
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
/*
1
8
abcaacab
*/