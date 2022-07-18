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
    int i,j,n,p;
    cin>>n>>p;
    string s;
    cin>>s;
    for(i=n-1;i>=0;i--){
        char c=s[i];
        c++;
        while(c-'a'<p){
            if(c!=s[i-1]&&c!=s[i-2]){
                string ans="";
                for(j=0;j<i;j++){
                    ans+=s[j];
                }
                ans+=c;
                for(j=i+1;j<n;j++){
                    char c='a';
                    while((c==ans[j-1]||c==ans[j-2])&&(c-'a')<p){
                        c++;
                    }
                    ans+=c;
                }
                cout<<ans;
                return;
            }
            c++;
        }
    }
    cout<<"NO";
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