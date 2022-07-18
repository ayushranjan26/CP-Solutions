#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e4+1;
const int INF=1e9+3;
 
void solve(){
    int i,j,k,n,l,r;
    cin>>n;
    string s;
    cin>>s;
    string a[16]={"22","25","27","32","33","35","52","55","57","72","75","77","533","377","53333","233333"};
    for(i=0;i<n;i++){
        if(s[i]=='1'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9'){
            cout<<"1\n"<<s[i];
            return;
        }
    }
    for(i=0;i<16;i++){
        int sz=a[i].size();
        int k=0;
        for(j=0;j<n;j++){
            if(s[j]==a[i][k]){
                k++;
            }
        }
        if(k==sz){
            cout<<sz<<"\n"<<a[i];
            return;
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