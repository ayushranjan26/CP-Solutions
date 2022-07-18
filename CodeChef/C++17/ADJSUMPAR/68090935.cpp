#include <bits/stdc++.h>

#define int long long int
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
    int a0=0;
    for(i=0;i<n;i++){
        if(a[i]==0){
            if(a0==1){
                a0=1;
            }
            else{
                a0=0;
            }
        }
        else{
            if(a0==1){
                a0=0;
            }
            else{
                a0=1;
            }
        }
    }
    if(a0==0){
        cout<<"YES";
        return;
    }

    a0=1;
    for(i=0;i<n;i++){
        if(a[i]==0){
            if(a0==1){
                a0=1;
            }
            else{
                a0=0;
            }
        }
        else{
            if(a0==1){
                a0=0;
            }
            else{
                a0=1;
            }
        }
    }
    if(a0==1){
        cout<<"YES";
        return;
    }
    cout<<"NO";
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
