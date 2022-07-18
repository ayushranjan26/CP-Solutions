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
    int i,j,k,n;
    cin>>n;
    string s;
    cin>>s;
    bool ok=false;
    int ans=n;
    for(i=0;i<26;i++){
        char ch=(char)('a'+i);
        k=n-1;
        int cnt=0;
        bool flg=true;
        j=0;
        while(j<k){
            if(s[j]==s[k]){
                k--;
                j++;
            }
            else{
                if(s[k]!=ch&&s[j]!=ch){
                    flg=false;
                    break;
                }
                if(s[k]==ch){
                    k--;
                }
                if(s[j]==ch){
                    j++;
                }
                cnt++;
            }
            //cout<<k<<" - "<<j<<endl;
        }
        if(flg){
            ok=true;
            ans=min(ans,cnt);
        }
        //cout<<ch<<" "<<cnt<<endl;
    }
    if(ok){
        cout<<ans;
    }
    else{
        cout<<"-1";
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
/*
1
8
abcaacab
*/