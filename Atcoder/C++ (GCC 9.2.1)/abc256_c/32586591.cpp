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
    int H[3],W[3];
    for(i=0;i<3;i++){
        cin>>H[i];
    }
    for(i=0;i<3;i++){
        cin>>W[i];
    }
    int res=0;
    int a,b,c,d,e,f,g,h;
    for(a=1;a<=30;a++){
        for(b=1;b<=30;b++){
            for(d=1;d<=30;d++){
                for(e=1;e<=30;e++){
                    c=H[0]-a-b;
                    f=H[1]-d-e;
                    g=W[0]-a-d;
                    h=W[1]-b-e;
                    i=W[2]-c-f;
                    if(g+h+i==H[2]&&min({c,f,g,h,i})>0){
                        res++;
                    }
                }
            }
        }
    }
    cout<<res;
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
