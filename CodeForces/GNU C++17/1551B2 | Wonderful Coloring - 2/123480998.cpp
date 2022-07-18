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
    int i,j,k,n,m;
    cin>>n>>k;
    int f[200001]={0},a[n];
    map<int,vector<int>> mp;
    for(i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]].push_back(i);
        f[a[i]]++;
    }
    int res=0;
    for(int i=0;i<200001;i++){
        res+=min(f[i],k);
    }
    res=res/k;
    j=0;
    int ans[n],cnt[k]={0};
    memset(ans,-1,sizeof(ans));
    for(auto it:mp){
        vector<int> v=mp[it.ft];
        for(i=0;i<v.size()&&i<k;i++){
            if(cnt[j]<res){
                ans[v[i]]=j;
                cnt[j]++;
            }
            j++;
            j%=k;
        }
    }
    for(i=0;i<n;i++){
        cout<<ans[i]+1<<" ";
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        //cout<<endl;
        cout<<endl;
        tc++;
    }
    return 0;
}