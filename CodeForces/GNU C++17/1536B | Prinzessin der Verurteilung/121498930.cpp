#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
 
void solve(){
    ll i,j,l,k,m,n;
    cin>>n;
    string s,a;
    cin>>s;
    vector<string> v;
    for(i=0;i<26;i++){
        a=(char)('a'+i);
        v.push_back(a);
    }
    for(i=0;i<26;i++){
        a=(char)('a'+i);
        for(j=0;j<26;j++){
            a+=(char)('a'+j);
            v.push_back(a);
            a.pop_back();
        }
    }
    for(i=0;i<26;i++){
        a=(char)('a'+i);
        for(j=0;j<26;j++){
            a+=(char)('a'+j);
            for(k=0;k<26;k++){
                a+=(char)('a'+k);
                v.push_back(a);
                a.pop_back();
            }
            a.pop_back();
        }
    }
    for(i=0;i<v.size();i++){
        bool flg=0;
        for(j=0;j<=s.size()-v[i].size();j++){
            bool chk=1;
            for(k=0;k<v[i].size();k++){
                if(s[j+k]!=v[i][k]){
                    chk=0;
                    break;
                }
            }
            if(chk==1){
                flg=1;
                break;
            }
        }
        if(!flg){
            cout<<v[i];
            return;
        }
    }
    return;
}
 
int main(){
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}