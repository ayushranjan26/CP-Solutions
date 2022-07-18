#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
 
void solve(){
    int i,j,k,n,m,d1;
    cin>>n>>m;
    string s1[n],s2[n-1];
    for(i=0;i<n;i++){
        cin>>s1[i];
    }
    for(i=0;i<n-1;i++){
        cin>>s2[i];
    }
    string ans="";
 
    for(i=0;i<m;i++){
        ll f1[26]={0};
        for(j=0;j<n;j++){
            f1[(int)(s1[j][i]-'a')]++;
        }
        ll f2[26]={0};
        for(j=0;j<n-1;j++){
            f2[(int)(s2[j][i]-'a')]++;
        }
 
        for(k=0;k<26;k++){
            //cout<<f1[k]<<" "<<f2[k]<<endl;
            if(f1[k]!=f2[k]){
                ans+=(char)('a'+k);
            }
        }
    }
    cout<<ans<<endl;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}