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
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pii> v;
    set<int> idx;
    for(i=0;i<n;i++){
        v.push_back({a[i],i});
        idx.insert(i);
    }
    sort(v.begin(),v.end());
 
    int x=a[n-1],res=0;
    for(i=0;i<n;i++){
        //cout<<v[i].ft<<" = "<<v[i].sd<<endl;
        if(v[i].ft<=x){
            if(idx.find(v[i].sd)!=idx.end()){
                idx.erase(v[i].sd);
            }
            //cout<<v[i].ft<<" "<<v[i].sd<<endl;
        }
        else{
            res++;
            //cout<<v[i].sd<<" ";
            int d=*idx.rbegin();
            x=a[d];
            //cout<<x<<"- "<<d<<endl;
            idx.erase(v[i].sd);
        }
    }
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
        cout<<"\n";
        tc++;
    }
    return 0;
}