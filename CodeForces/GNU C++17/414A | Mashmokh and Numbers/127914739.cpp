#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
 
void solve(){
    int i,j,k,n;
    cin>>n>>k;
    int a[n];
    if(n/2>k||(n/2==0&&k!=0)){
        cout<<"-1";
        return;
    }
    else{
        for(i=0;i<n;i++){
            a[i]=i+1;
        }
        k-=n/2;
        if(k){
            k++;
            if(k<=n){
                swap(a[k-1],a[0]);
                a[1]=(n/k+1)*k;
            }
            else{
                a[0]=k;
                a[1]=2*k;
            }
        }
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
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
        cout<<"\n";
        tc++;
    }
    return 0;
}