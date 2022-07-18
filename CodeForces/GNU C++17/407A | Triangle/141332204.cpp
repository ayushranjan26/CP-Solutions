#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
bool chk(int x1,int y1,int x2,int y2){
    if(x1==0||y1==0||x2==0||y2==0){
        return false;
    }
    if(x1==x2||y1==y2){
        return false;
    }
    int d1,d2,d3;
    d1=x1*x1+y1*y1;
    d2=x2*x2+y2*y2;
    d3=abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2);
    if(d3==d1+d2){
        return true;
    }
    return false;
}
 
void solve(){
    int i,j,a,b,x,y,p,q,d;
    cin>>a>>b;
    a=a*a;
    b=b*b;
    for(x=-2000;x<=2000;x++){
        if(a<x*x){
            continue;
        }
        d=sqrt(a-x*x);
        if(d*d!=a-x*x){
            continue;
        }
        y=d;
        for(p=-2000;p<=2000;p++){
            if(b<p*p){
                continue;
            }
            d=sqrt(b-p*p);
            if(d*d!=b-p*p){
                continue;
            }
            q=d;
            if(chk(x,y,p,q)){
                cout<<"YES\n";
                cout<<x<<" "<<y<<endl;
                cout<<p<<" "<<q<<endl;
                cout<<0<<" "<<0;
                return;
            }
        }
    }
    cout<<"NO";
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}