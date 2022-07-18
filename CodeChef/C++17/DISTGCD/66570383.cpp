#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,a,b;
    cin>>a>>b;
    if(b<a){
        swap(a,b);
    }
    if(a==b){
        cout<<1;
        return;
    }
    int c=0,d=b-a;
    for(i=1;i*i<(b-a);i++){
        if(d%i==0){
            c+=2;
        }
    }
    if(d%(i*i)==0){
        c++;
    }
    cout<<c;
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
