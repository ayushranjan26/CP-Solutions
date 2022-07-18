#include <bits/stdc++.h>

/*#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second*/

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//

void solve(){
    int i;
    string s;
    cin>>s;
    if(s[0]!='<'||s[1]!='/'||s[s.size()-1]!='>'||s.size()==3){
        cout<<"ERROR";
        return;
    }
    for(i=2;i<s.size()-1;i++){
        int d=(int)s[i];
        if(d>=48&&d<=57){
            continue;
        }
        else if(d>=97&&d<=122){
            continue;
        }
        else{
            cout<<"ERROR";
            return;
        }
    }
    cout<<"SUCCESS";
    return;
}

int main(){
   // IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
