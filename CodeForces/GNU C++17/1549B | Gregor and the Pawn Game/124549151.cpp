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
    int i,j,k,n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int ans=0;
    for(i=0;i<n;i++){
        if(s2[i]=='1'&&s1[i]=='0'){
            ans++;
            s2[i]='0';
        }
    }
    for(i=0;i<n;i++){
        if(s1[i]=='1'){
            if(i!=0&&s2[i-1]=='1'){
                ans++;
                s2[i-1]='0';
            }
            else if(i!=n-1&&s2[i+1]=='1'){
                ans++;
                s2[i+1]='0';
            }
        }
    }
    cout<<ans;
    return;
}
 
int main(){
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
 
 