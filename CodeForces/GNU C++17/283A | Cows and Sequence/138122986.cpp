#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
int f[200005];
void solve(){
    int i,j,q;
    cin>>q;
    int n=1,sm=0;
    vector<int> v;
    v.push_back(0);
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int a,x;
            cin>>a>>x;
            sm+=a*x;
            f[a-1]+=x;
        }
        else if(t==2){
            int x;
            cin>>x;
            v.push_back(x);
            sm+=x;
            n++;
        }
        else{
            sm-=f[v.size()-1];
            f[v.size()-2]+=f[v.size()-1];
            f[v.size()-1]=0;
            sm-=v.back();
            v.pop_back();
            n--;
        }
        double ans=(double)sm/(double)n;
        cout<<fixed<<setprecision(7)<<ans<<"\n";
    }
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}