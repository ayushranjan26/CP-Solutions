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
    int i,j,x,y;
    cin>>x>>y;
    i=0,j=0;
    if(x==0&&y==0){
        cout<<"0";
        return;
    }
    int cnt=0,l=1;
    while(1){
        int tx=i,ty=j;
        if(cnt%4==0){
            i+=l;
        }
        else if(cnt%4==1){
            j+=l;
        }
        else if(cnt%4==2){
            i-=l;
        }
        else{
            j-=l;
        }
        cnt++;
        if(cnt%2==0){
            l++;
        }
        if((x==i&&y>=min(ty,j)&&y<=max(ty,j))||(y==j&&x>=min(tx,i)&&x<=max(tx,i))){
            cout<<cnt-1;
            return ;
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