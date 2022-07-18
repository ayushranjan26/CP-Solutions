 #include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,a,n;
    cin>>a>>n;
    int res=a;
    j=n%4;
    if(a%2){
        if(j==1){
            a+=n;
        }
        else if(j==2){
            a+=(n-1)-n;
        }
        else if(j==3){
            a+=(n-2)-n-(n-1);
        }
    }
    else{
        if(j==1){
            a-=n;
        }
        else if(j==2){
            a-=(n-1)-n;
        }
        else if(j==3){
            a-=(n-2)-n-(n-1);
        }
    }
    cout<<a;
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