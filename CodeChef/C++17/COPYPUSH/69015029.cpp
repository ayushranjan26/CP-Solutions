#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n;
    string s;
    cin>>n>>s;
    string t;
    int swt=0;
    while(s.size()>0){
        t="";
        for(i=0;i<s.size()/2;i++){
            t+=s[i];
        }
        string t2=t;
        t=t+t;
        if(t==s){
            swt=0;
            s=t2;
        }
        else{
            if(swt==1){
                cout<<"NO";
                return;
            }
            else{
                s.pop_back();
                swt=1;
            }
        }
        //cout<<s<<" "<<t<<endl;
    }
    cout<<"YES";
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
