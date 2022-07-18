#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int s=a[0];
    for(i=1;i<n;i++){
        s&=a[i];
    }
    int suf[n];
    suf[n-1]=a[n-1];
    for(i=n-2;i>=0;i--){
        suf[i]=a[i]&suf[i+1];
    }

    int res=0,d=a[0],len=1;
    for(i=0;i<n-1;i++){
        d&=a[i];
        if(d==s&&suf[i+1]==s){
            d=a[i+1];
            res+=len-1;
            len=1;
        }
        else{
            len++;
        }
        //cout<<res<<" "<<d<<" "<<len<<endl;
    }
    res+=len-1;
    cout<<res;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
