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
    int i,j;
    string s;
    getline(cin,s);
    string s2="";
    for(i=0;i<s.size()-1;i++){
        if(s[i]==' '){
            continue;
        }
        s2+=s[i];
    }
    //cout<<s2<<" ";
    if(s2[s2.size()-1]=='A'||s2[s2.size()-1]=='E'||s2[s2.size()-1]=='I'||s2[s2.size()-1]=='O'||s2[s2.size()-1]=='U'||s2[s2.size()-1]=='Y'){
        cout<<"YES";
        return;
    }
    if(s2[s2.size()-1]=='a'||s2[s2.size()-1]=='e'||s2[s2.size()-1]=='i'||s2[s2.size()-1]=='o'||s2[s2.size()-1]=='u'||s2[s2.size()-1]=='y'){
        cout<<"YES";
        return;
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