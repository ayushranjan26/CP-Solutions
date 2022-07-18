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
    int i,j,n,k;
    cin>>n;
    string s;
    cin>>s;
    n++;
    vector<int> res;
    if(s[0]=='0'||s[1]=='0'||s[n-1]=='0'){
        cout<<"No";
        return;
    }
    cout<<"Yes\n";
    res.push_back(0);
    res.push_back(1);
    for(i=2;i<n-1;i++){
        if(s[i]=='0'){
            int d=res.back();
            res.pop_back();
            res.push_back(i);
            res.push_back(d);
        }
        else{
            res.push_back(i);
        }
    }

    for(i=0;i<n-1;i++){
        cout<<res[i]<<" ";
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
