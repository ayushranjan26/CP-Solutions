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
    int i,j,k;
    string s,t;
    int n,m;
    cin>>s>>t;
    n=s.size(),m=t.size();
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            string t1="";
            for(k=i;k<=j;k++){
                t1+=s[k];
                if(t1==t){
                    cout<<"YES";
                    return;
                }
            }
            for(k=j-1;k>=i;k--){
                t1+=s[k];
                if(t1==t){
                    cout<<"YES";
                    return;
                }
            }
            for(k=i-1;k>=0;k--){
                t1+=s[k];
                if(t1==t){
                    cout<<"YES";
                    return;
                }
            }
        }
    }
    cout<<"NO";
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}