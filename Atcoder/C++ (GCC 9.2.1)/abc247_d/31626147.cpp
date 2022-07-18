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
    int i,j,n;
    cin>>n;
    queue<pair<int,int> > q;
    while(n--){
        int t,x,c;
        cin>>t;
        if(t==1){
            cin>>x>>c;
            q.push({x,c});
        }
        else{
            cin>>c;
            int sm=0;
            while(1){
                if(q.front().sd>=c){
                    sm+=q.front().ft*c;
                    q.front().sd-=c;
                    break;
                }
                else{
                    sm+=q.front().ft*q.front().sd;
                    c-=q.front().sd;
                    q.pop();
                }
            }
            cout<<sm<<endl;
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

