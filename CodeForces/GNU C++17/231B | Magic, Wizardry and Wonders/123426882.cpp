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
    int i,j,n,d,l;
    cin>>n>>d>>l;
    vector<int> a(n,1);
    if(d>0){
        if(n%2)d--;
 
        for(i=0;i<n;i+=2){
            if(d>=l-1){
                a[i]=l;
                d-=(l-1);
            }
            else{
                a[i]=d+1;
                d=0;
            }
        }
    }
    else{
        d=abs(d);
        if(n%2)d++;
        for(i=1;i<n;i+=2){
            if(d>=l-1){
                a[i]=l;
                d-=(l-1);
            }
            else{
                a[i]=d+1;
                d=0;
            }
        }
    }
    if(d!=0){
        cout<<"-1";
    }
    else{
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
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
        //cout<<endl;
        cout<<endl;
        tc++;
    }
    return 0;
}