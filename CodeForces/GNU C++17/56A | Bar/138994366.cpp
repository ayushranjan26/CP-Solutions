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
    int i,j,n,res=0;
    cin>>n;
    string s[11]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    for(i=0;i<n;i++){
        string t;
        cin>>t;
        bool flg=false;
        for(j=0;j<11;j++){
            //cout<<s[j]<<" ";
            if(s[j]==t){
                flg=true;
            }
        }
        if(flg){
            res++;
        }
        for(j=0;j<=17;j++){
            string t1=to_string(j);
            if(t1==t){
                res++;
                break;
            }
        }
    }
    cout<<res;
 
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