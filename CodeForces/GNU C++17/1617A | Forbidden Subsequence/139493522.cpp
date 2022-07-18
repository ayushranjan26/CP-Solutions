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
    int i,j,n;
    string s,t;
    cin>>s>>t;
    n=s.size();
    string a="",b="",c="",ot="";
    for(i=0;i<n;i++){
        if(s[i]=='a'){
            a+=s[i];
        }
        else if(s[i]=='b'){
            b+=s[i];
        }
        else if(s[i]=='c'){
            c+=s[i];
        }
        else{
            ot+=s[i];
        }
    }
    sort(ot.begin(),ot.end());
    string res="";
    if(t=="abc"&&a.size()!=0){
        res+=a;
        res+=c;
        res+=b;
        //cout<<res<<" ";
    }
    else if(t=="acb"){
        res+=a;
        res+=b;
        res+=c;
    }
    else if(t=="bac"){
        res+=a;
        res+=b;
        res+=c;
    }
    else if(t=="bca"){
        res+=a;
        res+=b;
        res+=c;
    }
    else if(t=="cab"){
        res+=a;
        res+=b;
        res+=c;
    }
    else{
        res+=a;
        res+=b;
        res+=c;
    }
    res+=ot;
    cout<<res;
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}