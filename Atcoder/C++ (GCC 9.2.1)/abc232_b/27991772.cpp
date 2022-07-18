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
    string s1,s2;
    cin>>s1>>s2;
    n=s1.size();
    int d[n]={0};
    for(i=0;i<n;i++){
        int d1,d2;
        d1=(int)(s1[i]-'a');
        d2=(int)(s2[i]-'a');
        d[i]=(d1-d2+26)%26;
        //cout<<d[i]<<" ";
    }
    sort(d,d+n);
    if(d[0]==d[n-1]){
        cout<<"Yes";
    }
    else{
        cout<<"No";
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
