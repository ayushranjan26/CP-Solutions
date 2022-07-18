#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
/*319982OP*/
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e4+1;
const int INF=1e9+3;
bool chk(int a[],int n){
    int i,j,k;
    for(i=0;i<n;i++){
        if(a[i]!=i+1){
            return false;
        }
    }
    return true;
}
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    k=1;
    while(!chk(a,n)){
        if(k%2){
            for(i=0;i<n;i+=2){
                if(i!=n-1&&a[i]>a[i+1]){
                    swap(a[i],a[i+1]);
                }
            }
        }
        else{
            for(i=1;i<n;i+=2){
                if(i!=n-1&&a[i]>a[i+1]){
                    swap(a[i],a[i+1]);
                }
            }
        }
        k++;
    }
    cout<<k-1;
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