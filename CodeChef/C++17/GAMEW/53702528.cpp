 #include <bits/stdc++.h>

#define int long long
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
    string s;
    cin>>s;
    int b=0;
    for(i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            b++;
        }
    }
    b++;
    //cout<<b<<" ";
    if(b%3!=2){
        cout<<"SAHID";
    }
    else{
        cout<<"RAMADHIR";
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
