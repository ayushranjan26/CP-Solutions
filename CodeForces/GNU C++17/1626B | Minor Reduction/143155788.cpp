#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n;
    string s;
    cin>>s;
    n=s.size();
    bool f=false;
    for(i=1;i<n;i++){
        int d1,d2;
        d1=(int)(s[i]-'0');
        d2=(int)(s[i-1]-'0');
        if(d1+d2>=10){
            f=true;
        }
    }
    if(f){
       for(i=n-1;i>=1;i--){
            int d1,d2;
            d2=(int)(s[i]-'0');
            d1=(int)(s[i-1]-'0');
            if(d1+d2>=10){
                string s2=to_string(d1+d2);
                s[i]=s2[1];
                s[i-1]=s2[0];
                cout<<s;
                return;
            }
        }
    }
    else{
        int d1=(int)(s[0]-'0')+(int)(s[1]-'0');
        string s2=to_string(d1);
        for(i=2;i<n;i++){
            s2+=s[i];
        }
        cout<<s2;
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
 