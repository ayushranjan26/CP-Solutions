#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e7+9;

void solve(){
    int i,j,k;
    string a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"Yes";
        return ;
    }
    for(i=1;i<a.size();i++){
        swap(a[i],a[i-1]);
        if(a==b){
            cout<<"Yes";
            return ;
        }
        swap(a[i],a[i-1]);
    }
    cout<<"No";
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

