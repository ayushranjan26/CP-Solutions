#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

int n;
string s[12],res;

int dx[8]={1,-1,1,-1,0,1,0,-1};
int dy[8]={1,1,-1,-1,1,0,-1,0};

void rec(int x,int y,int dir,int sz,string t){
    if(sz==0){
        if(t>res){
            res=t;
        }
        return;
    }
    else{
        t+=s[x][y];
        x+=dx[dir];
        y+=dy[dir];
        x+=n;y+=n;
        x%=n;y%=n;
        //cout<<x<<" "<<y<<endl;
        rec(x,y,dir,sz-1,t);
    }
}

void solve(){
    int i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    res=s[0];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<8;k++){
                rec(i,j,k,n,"");
            }
        }
    }
    cout<<res;
    return;
}

int32_t main(){
    IOS;
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
