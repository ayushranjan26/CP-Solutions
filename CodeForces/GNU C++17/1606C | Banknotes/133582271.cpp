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
    int i,j,n,k,k1;
    cin>>n>>k;
    k++;
    k1=k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        int c=1;
        for(j=0;j<a[i];j++){
            c*=10;
        }
        a[i]=c;
        //cout<<a[i]<<" ";
    }
    //cout<<endl;
    int res=0;
    for(i=0;i<n-1;i++){
        if(k>=a[i+1]/a[i]){
            res+=a[i]*(a[i+1]/a[i]-1);
            k-=(a[i+1]/a[i]-1);
            //cout<<res<<" "<<k<<endl;
        }
        else{
            res+=k*a[i];
            k=0;
            //cout<<res<<" - "<<k<<endl;
        }
    }
    if(k>0){
        res+=k*(a[n-1]);
    }
    cout<<res;
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