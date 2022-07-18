#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,x,y;
    cin>>x>>y;
    if(y<x){
        swap(x,y);
    }
    else{

    }

    if(x==0&&y==0){
        cout<<"0";
    }
    else if(x==0||y==0){
        cout<<"-1";
    }
    else if(x==y){
        cout<<x;
    }
    else{
        int c=0;
        while(y-x>x){
            x=x*2;
            c++;
        }
        cout<<y+1+c;
    }
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
