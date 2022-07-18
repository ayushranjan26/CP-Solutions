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
    int i,j,n,k;
    cin>>n>>k;
    if(k==1){
        cout<<"YES\n";
        for(i=0;i<n;i++){
            cout<<i+1<<"\n";
        }
    }
    else if(n%2==1){
        cout<<"NO";
    }
    else{
        int a[n][k];
        int od=1,ev=2;
        for(i=0;i<n;i++){
            for(j=0;j<k;j++){
                if(i%2==0){
                    a[i][j]=ev;
                    ev+=2;
                }
                else{
                    a[i][j]=od;
                    od+=2;
                }
            }
        }
        cout<<"YES\n";
        for(i=0;i<n;i++){
            for(j=0;j<k;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
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