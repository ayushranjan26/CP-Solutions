#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
double v;
long double eps=1e-5;
double dp(double c,double m,double p,ll cnt){
    if(fabs(c)<=eps&&fabs(m)<=eps){
        return p*cnt;
    }
    else if(fabs(c)<=eps){
        double d1;
        if(m>=v){
            d1=v;
        }
        else{
            d1=m;
        }
        return m*dp(c,m-d1,p+d1,cnt+1)+p*cnt;
    }
    else if(fabs(m)<=eps){
        double d1;
        if(c>=v){
            d1=v;
        }
        else{
            d1=c;
        }
        return c*dp(c-d1,m,p+d1,cnt+1)+p*cnt;
    }
    else{
        double d1,d2;
        if(c>=v){
            d1=v;
        }
        else{
            d1=c;
        }
        if(m>=v){
            d2=v;
        }
        else{
            d2=m;
        }
        return c*dp(c-d1,m+d1/2,p+d1/2,cnt+1)+m*dp(c+d2/2,m-d2,p+d2/2,cnt+1)+p*cnt;
    }
}
void solve(){
    double c,m,p;
    cin>>c>>m>>p>>v;
    double ans=dp(c,m,p,1);
    cout<<fixed<<setprecision(10)<<ans;
    return;
}
 
int main(){
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}