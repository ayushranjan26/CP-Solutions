#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 998244353;

void solve(){
    int i,j,n,k;
    cin>>n>>k;
    int x[n],y[n];
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    if(k==1){
        cout<<"Infinity";
        return;
    }
    map<tuple<int,int,int>,int> slope;
    set<tuple<int,int,int>> st[n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            int a,b,c;
            a=y[j]-y[i];
            b=x[i]-x[j];
            c=a*x[i]+b*y[i];
            int g=__gcd(abs(a),abs(b));
            g=__gcd(abs(c),g);
            a/=g;b/=g;c/=g;
            if(c<0){
                c=-c;
                a=-a;
                b=-b;
            }
            else if(c==0){
                if(a<0){
                    a=-a;
                    b=-b;
                }
                else if(a==0){
                    b=abs(b);
                }
            }
            if(st[j].find(make_tuple(a,b,c))==st[j].end()){
                slope[make_tuple(a,b,c)]++;
                st[j].insert(make_tuple(a,b,c));
            }
        }
    }
    int res=0;
    for(auto it:slope){
        if(it.sd>=k){
            res++;
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

