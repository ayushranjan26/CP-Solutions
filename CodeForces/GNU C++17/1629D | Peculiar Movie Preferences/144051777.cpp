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
    cin>>n;
    string s[n];
    multiset<string> st;
    for(i=0;i<n;i++){
        cin>>s[i];
        st.insert(s[i]);
    }
    for(i=0;i<n;i++){
        string t=s[i];
        reverse(t.begin(),t.end());
        if(st.find(t)!=st.end()){
            cout<<"YES";
            return;
        }
        st.erase(st.find(s[i]));
    }
    for(i=0;i<n;i++){
        st.insert(s[i]);
    }
    for(i=0;i<n;i++){
        string t=s[i];
        reverse(t.begin(),t.end());
        if(t.size()==2){
            for(j=0;j<26;j++){
                char c=(char)('a'+j);
                string t1=c+t;
                if(st.find(t1)!=st.end()){
                    cout<<"YES";
                    return;
                }
            }
        }
        else{
            t=s[i];
            t.pop_back();
            reverse(t.begin(),t.end());
            if(st.find(t)!=st.end()){
                cout<<"YES";
                return;
            }
        }
        st.erase(st.find(s[i]));
    }
    cout<<"NO";
    return;
}
 
int32_t main(){
    IOS;
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
 