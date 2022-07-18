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
    int i,j,k,n;
    cin>>n;
    ll mx=-1e9-1,mn=1e9+1;
    while(n--){
        string s,r;
        ll y;
        cin>>s>>y>>r;
        if(r=="N"){
            if(s==">"){
                s="<=";
            }
            else if(s=="<"){
                s=">=";
            }
            else if(s=="<="){
                s=">";
            }
            else if(s==">="){
                s="<";
            }
        }
        //cout<<s<<"\n";
        if(s=="<"){
            mn=min(mn,y-1);
        }
        if(s=="<="){
            mn=min(mn,y);
        }
        if(s==">"){
            mx=max(mx,y+1);
        }
        if(s==">="){
            mx=max(mx,y);
        }
        //cout<<mx<<" "<<mn<<endl;
    }
    if(mx<=mn){
        cout<<mx;
    }
    else if(mx==-1e10){
        cout<<mn;
    }
    else if(mn==1e10){
        cout<<mx;
    }
    else{
        cout<<"Impossible";
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        //cout<<"\n";
        cout<<endl;
        tc++;
    }
    return 0;
}