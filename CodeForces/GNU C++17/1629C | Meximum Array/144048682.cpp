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
    int arr[n];
    map<int,set<int> > mp;
    for(i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]].insert(i);
    }
 
    int mn=-1;
    vector<int> res;
    while(mn<n-1){
        int mnn=mn;
        for(i=0;i<=n+1;i++){
            while((!mp[i].empty())&&(mn >= *mp[i].begin())){
                mp[i].erase(*mp[i].begin());
            }
            if(mp[i].size()==0){
                res.push_back(i);
                break;
            }
            else{
                mnn=max(mnn,*mp[i].begin());
            }
        }
        if(res.back()==0){
            mn++;
        }
        mn=max(mnn,mn);
    }
 
    cout<<res.size()<<endl;
    for(i=0;i<res.size();i++){
        cout<<res[i]<<" ";
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
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 