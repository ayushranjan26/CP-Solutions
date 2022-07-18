/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
//-24 -14
//4 1 24 27 13 1
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
void solve(){
    ll x,y,c1,c2,c3,c4,c5,c6;
    cin>>y>>x;
    cin>>c1>>c2>>c3>>c4>>c5>>c6;
    c1=min(c1,c6+c2);
    c2=min(c2,c1+c3);
    c3=min(c3,c2+c4);
    c4=min(c4,c3+c5);
    c5=min(c5,c6+c4);
    c6=min(c6,c5+c1);
    //cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<c5<<" "<<c6<<endl;
    ll ans=0;
    if(x>=0&&y>=0){
        ll d=min(x,y);
        ans+=d*c1;
        x-=d;
        y-=d;
        ans+=x*c2+y*c6;
    }
    else if(x<=0&&y<=0){
        x=abs(x);
        y=abs(y);
        ll d=min(x,y);
        ans+=d*c4;
        x-=d;
        y-=d;
        ans+=x*c5+y*c3;
    }
    else{
        if(x<=0){
            x=abs(x);
            ans+=c6*y+c5*x;
        }
        else{
            y=abs(y);
            ans+=c3*y+c2*x;
        }
    }
    cout<<ans;
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}