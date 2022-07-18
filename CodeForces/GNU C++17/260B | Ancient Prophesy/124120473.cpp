#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
bool valid(string s){
    int i;
    for(i=0;i<10;i++){
        if(i==2||i==5){
            if(s[i]!='-'){
                return false;
            }
        }
        else{
            if(s[i]=='-'){
                return false;
            }
        }
    }
    string s2;
    int d,m,y;
    s2=s.substr(0,2);
    d=stoi(s2);
    s2=s.substr(3,2);
    m=stoi(s2);
    s2=s.substr(6,4);
    y=stoi(s2);
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(y>=2013&&y<=2015&&m>=1&&m<=12&&d>=1&&d<=days[m-1]){
        return true;
    }
    return false;
}
 
void solve(){
    int i,j,k,n,m;
    string s,res;
    cin>>s;
    map<string,int> mp;
    for(i=0;i<s.size()-9;i++){
        string s1=s.substr(i,10);
        if(valid(s1)){
            //cout<<s1<<" ";
            mp[s1]++;
        }
    }
    int ans=0;
    for(auto it:mp){
        if(it.sd>ans){
            ans=it.sd;
            res=it.ft;
        }
    }
    cout<<res;
    return;
}
 
int main(){
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
 