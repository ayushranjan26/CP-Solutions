#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,k,n;
    char s1,s2,s3,t1,t2,t3;
    cin>>s1>>s2>>s3>>t1>>t2>>t3;
    int c=0;
    if(s1==t1){
        c++;
    }
    if(s2==t2){
        c++;
    }
    if(s3==t3){
        c++;
    }
    if(c==1){
        cout<<"No";
        return;
    }
    cout<<"Yes";
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

