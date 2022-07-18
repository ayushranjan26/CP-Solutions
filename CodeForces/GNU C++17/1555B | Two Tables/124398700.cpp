#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
void solve(){
    ll i,j,k,n,W,H,x1,y1,x2,y2,w,h,x3,y3,x4,y4,d1,d2,d3,d4,x,y,difx,dify;
    cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;
    x3=x1,y3=y2,x4=x2,y4=y1;
 
    d1=1e15;
    x=w,y=h;
    if(x>x1&&y>y1){
        difx=x-x1,dify=y-y1;
        if(difx+x2<=W){
            d1=min(d1,difx);
        }
        if(dify+y2<=H){
            d1=min(d1,dify);
        }
    }
    else{
        d1=0;
    }
 
    d2=1e15;
    x=W-w,y=H-h;
    if(x<x2&&y<y2){
        difx=x2-x,dify=y2-y;
        if(x1-difx>=0){
            d2=min(d2,difx);
        }
        if(y1-dify>=0){
            d2=min(d2,dify);
        }
    }
    else{
        d2=0;
    }
 
    d3=1e15;
    x=w,y=H-h;
    if(x>x3&&y<y3){
        difx=x-x3,dify=y3-y;
        if(x2+difx<=W){
            d3=min(d3,difx);
        }
        if(y1-dify>=0){
            d3=min(d3,dify);
        }
    }
    else{
        d3=0;
    }
 
    d4=1e15;
    x=W-w,y=h;
    if(x<x4&&y>y4){
        difx=x4-x,dify=y-y4;
        if(x1-difx>=0){
            d4=min(d4,difx);
        }
        if(y2+dify<=H){
            d4=min(d4,dify);
        }
    }
    else{
        d4=0;
    }
 
    ll ans=min({d1,d2,d3,d4});
    if(ans==1e15){
        cout<<"-1";
        return;
    }
    double res=(double)ans;
    cout<<fixed<<setprecision(7)<<res;
    return;
}
 
int main(){
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
 