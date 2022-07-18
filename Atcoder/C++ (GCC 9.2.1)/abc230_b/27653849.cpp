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
    int i,j,n,a,b,p,q,r,s;
    cin>>n>>a>>b>>p>>q>>r>>s;
    char arr[q-p+1][s-r+1];
    for(i=0;i<q-p+1;i++){
        for(j=0;j<s-r+1;j++){
            arr[i][j]='.';
        }
    }
    for(i=p;i<=q;i++){
        if(i+b-a-r>=0&&i+b-a-r<s-r+1){
            arr[i-p][i+b-a-r]='#';
        }
    }
    for(i=r;i<=s;i++){
        if(a+b-i-p>=0&&a+b-i-p<q-p+1){
            arr[a+b-i-p][i-r]='#';
        }
    }
    for(i=0;i<q-p+1;i++){
        for(j=0;j<s-r+1;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
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
        cout<<"\n";
        tc++;
    }
    return 0;
}
