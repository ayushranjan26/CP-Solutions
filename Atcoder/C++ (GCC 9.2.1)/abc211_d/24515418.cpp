#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;

void solve(){
    int i,j,k,n,m;
    string a[4];
    string b[4]={"H","2B","3B","HR"};
    for(i=0;i<4;i++){
        cin>>a[i];
    }
    int ans=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(b[i]==a[j]){
                ans++;
                break;
            }
        }
    }
    if(ans==4){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return;
}

int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}
