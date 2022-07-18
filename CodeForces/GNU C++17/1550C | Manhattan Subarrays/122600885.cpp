#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
int mod=1e9+7;
 
void solve(){
    int i,j,k,n,d1;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=n+n-1;
    for(i=2;i<n;i++){
        int x,y,z;
        x=v[i],y=v[i-1],z=v[i-2];
        if(x<=y&&y<=z){
            continue;
        }
        if(x>=y&&y>=z){
            continue;
        }
        ans++;
    }
    for(i=3;i<n;i++){
        int a,b,c,d;
        a=v[i-3],b=v[i-2],c=v[i-1],d=v[i];
        if((a>=b&&b>=c)||(a<=b&&b<=c)){
            continue;
        }
        if((a>=b&&b>=d)||(a<=b&&b<=d)){
            continue;
        }
        if((a>=c&&c>=d)||(a<=c&&c<=d)){
            continue;
        }
        if((b>=c&&c>=d)||(b<=c&&c<=d)){
            continue;
        }
        ans++;
    }
    cout<<ans;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}