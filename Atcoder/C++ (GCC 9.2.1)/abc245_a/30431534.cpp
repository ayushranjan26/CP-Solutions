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
    int i,j,a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<c){
        cout<<"Takahashi";
    }
    else if(c<a){
        cout<<"Aoki";
    }
    else{
        if(b<=d){
            cout<<"Takahashi";
        }
        else{
            cout<<"Aoki";
        }
    }
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}

