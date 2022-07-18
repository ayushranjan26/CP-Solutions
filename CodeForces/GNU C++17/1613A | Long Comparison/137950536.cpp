#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
int power(int a,int b) {
    int result=1;
    while(b)
    {   if(b%2) result=(result*a);
        a=(a*a);
        b/=2;
    }
    return result;
}
 
 
void solve(){
    int i,j,x1,p1,x2,p2;
    cin>>x1>>p1>>x2>>p2;
    int sz1,sz2;
    string s,t;
    s=to_string(x1);
    t=to_string(x2);
    sz1=s.size()+p1;
    sz2=t.size()+p2;
    if(sz1>sz2){
        cout<<">";
    }
    else if(sz2>sz1){
        cout<<"<";
    }
    else{
        sz1-=p1;
        sz2-=p2;
        if(sz1>sz2){
            int dif=sz1-sz2;
            x2*=pow(10,dif);
            if(x1<x2){
                cout<<"<";
            }
            else if(x1>x2){
                cout<<">";
            }
            else{
                cout<<"=";
            }
        }
        else{
            int dif=sz2-sz1;
            x1*=pow(10,dif);
            if(x1<x2){
                cout<<"<";
            }
            else if(x1>x2){
                cout<<">";
            }
            else{
                cout<<"=";
            }
        }
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