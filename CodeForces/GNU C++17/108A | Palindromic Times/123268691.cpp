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
    int i,j,k;
    string s,h="",m="",hr;
    cin>>s;
    h+=s[0],h+=s[1];
    m+=s[3],m+=s[4];
    int a[4];
    a[0]=int(h[0]-'0');
    a[1]=int(h[1]-'0');
    a[2]=int(m[0]-'0');
    a[3]=int(m[1]-'0');
    while(1){
        a[3]++;
        if(a[3]==10){
            a[2]++;
            a[3]=0;
        }
        if(a[2]==6){
            a[1]++;
            a[2]=0;
        }
        if(a[1]==10){
            a[0]++;
            a[1]=0;
        }
        if(a[0]==2&&a[1]==4){
            a[0]=0;
            a[1]=0;
        }
        if(a[0]==a[3]&&a[1]==a[2]){
            cout<<a[0]<<a[1]<<":"<<a[2]<<a[3];
            break;
        }
        //cout<<a[0]<<a[1]<<":"<<a[2]<<a[3]<<endl;
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