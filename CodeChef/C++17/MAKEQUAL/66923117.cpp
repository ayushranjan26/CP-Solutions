#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

bool chk(int a,int b,int c){
    if(a<0||b<0||c<0){
        return false;
    }

    if((a&b)==0&&(b&c)==0&&(c&a)==0){
        return true;
    }
    return false;
}

void solve(){
    int i,j,a,b,c;
    cin>>a>>b>>c;
    int sm=a+b+c;
    int x=1;
    while(x<1e16){
        if((sm+x-1)%3==0){
            int d=(sm+x-1)/3;
            if(chk(d-a,d-b,d-c)){
                cout<<"YES";
                return;
            }
        }
        x=x*2;
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
