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
    int i,j,k,n,m;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    int ans=0;
    for(i=0;i<5;i++){
        vector<int> v(n);
        for(j=0;j<n;j++){
            int cntp=0,cntn=0;
            for(k=0;k<s[j].size();k++){
                if((int)(s[j][k]-'a')==i){
                    cntp++;
                }
                else{
                    cntn++;
                }
            }
            //cout<<cntp<<" "<<cntn<<endl;
            v[j]=cntp-cntn;
        }
        sort(v.rbegin(),v.rend());
        int sm=0;
        for(j=0;j<n;j++){
            //cout<<v[j]<<" ";
            sm+=v[j];
            if(sm>0){
                ans=max(ans,j+1);
            }
            else{
                break;
            }
        }
        //cout<<endl;
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
        //cout<<endl;
        cout<<endl;
        tc++;
    }
    return 0;
}