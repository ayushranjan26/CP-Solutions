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
    int i,j,n,k;
    cin>>n;
    int a[n];
    int c0=0,c1=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            c0=1;
        }
        if(a[i]==1){
            c1=1;
        }
    }
    if(c0==1&&c1==1){
        cout<<"NO";
    }
    else if(c1==0){
        cout<<"YES";
    }
    else{
        sort(a,a+n);
        for(i=1;i<n;i++){
            if(a[i]==a[i-1]+1){
                cout<<"NO";
                return;
            }
        }
        cout<<"YES";
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
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 