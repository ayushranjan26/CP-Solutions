#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;


void solve(){
    int i,j,n,k;
    cin>>k;
    if(k>=60){
        k=k%60;
        if(k==0){
            cout<<"22:00";
        }
        else if(k>0&&k<10){
            cout<<"22:0"<<k;
        }
        else{
            cout<<"22:"<<k;
        }
    }
    else{
        if(k==0){
            cout<<"21:00";
        }
        else if(k>0&&k<10){
            cout<<"21:0"<<k;
        }
        else{
            cout<<"21:"<<k;
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
        cout<<"\n";
        tc++;
    }
    return 0;
}
