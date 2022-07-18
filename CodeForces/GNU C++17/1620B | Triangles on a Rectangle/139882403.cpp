#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,w,h;
    cin>>w>>h;
    vector<int> x1,x2,y1,y2;
    for(i=0;i<4;i++){
        int sz;
        cin>>sz;
        for(j=0;j<sz;j++){
            int d;
            cin>>d;
            if(i==0){
                x1.push_back(d);
            }
            if(i==1){
                x2.push_back(d);
            }
            if(i==2){
                y1.push_back(d);
            }
            if(i==3){
                y2.push_back(d);
            }
        }
    }
    sort(x1.begin(),x1.end());
    sort(x2.begin(),x2.end());
    sort(y1.begin(),y1.end());
    sort(y2.begin(),y2.end());
    int res=0;
    res=max({(x1[x1.size()-1]-x1[0])*h, (x2[x2.size()-1]-x2[0])*h,(y1[y1.size()-1]-y1[0])*w, (y2[y2.size()-1]-y2[0])*w});
    cout<<res;
    return;
}
 
int32_t main(){
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