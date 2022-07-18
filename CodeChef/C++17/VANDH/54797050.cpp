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
    int i,j,n,m;
    cin>>n>>m;

    if(n==m){
        string s="";
        for(i=0;i<n+1;i++){
            s+="01";
        }
        cout<<s.size()<<endl;
        cout<<s;
    }
    else if(n>m){
        string s="0";
        for(i=0;i<n;i++){
            s+="10";
        }
        int cnt=n-1-m;
        string t="";
        for(i=0;i<s.size();i++){
            t+=s[i];
            if(cnt&&i>0&&i%2==0){
                cnt--;
                t+='0';
            }
        }
        cout<<t.size()<<endl;
        cout<<t;
    }
    else{
        string s="1";
        for(i=0;i<m;i++){
            s+="01";
        }
        int cnt=m-1-n;
        string t="";
        for(i=0;i<s.size();i++){
            t+=s[i];
            if(cnt&&i>0&&i%2==0){
                cnt--;
                t+='1';
            }
        }
        cout<<t.size()<<endl;
        cout<<t;
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
