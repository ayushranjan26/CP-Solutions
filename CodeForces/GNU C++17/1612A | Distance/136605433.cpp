#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n,x,y;
    cin>>x>>y;
    if((x+y)%2==1){
        cout<<"-1 -1";
    }
    else{
        for(i=0;i<51;i++){
            for(j=0;j<51;j++){
                if(x+y==2*(abs(i)+abs(j))&&x+y==2*(abs(x-i)+abs(y-j))){
                    cout<<i<<" "<<j;
                    return ;
                }
            }
        }
        cout<<"-1 -1";
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