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
    cin>>n;
    vector<int> a(n);
    vector<int>  vis(n,0);
    for(i=0;i<n;i++){
        cin>>a[i];
        a[i]--;
    }
    vector<int> ans(n,-1);
    int left=0;
    for(i=0;i<n;i++){
        if(vis[a[i]]==0){
            ans[i]=a[i];
            vis[a[i]]=1;
        }
        else{
            left++;
        }
    }
    cout<<n-left<<endl;
    if(left==1){
        bool flg=false;
        for(i=0;i<n;i++){
            //cout<<vis[i]<<" "<<ans[i]<<endl;
            if(vis[i]==0&&ans[i]==-1){
                flg=true;
            }
        }
        if(flg){
            for(i=0;i<n;i++){ans[i]=-1,vis[i]=0;}
            for(i=n-1;i>=0;i--){
                //cout<<vis[i]<<" "<<ans[i]<<endl;
                if(vis[a[i]]==0){
                    ans[i]=a[i];
                    vis[a[i]]=1;
                }
                //cout<<vis[i]<<" "<<ans[i]<<endl;
            }
        }
    }
    set<int> s;
    for(i=0;i<n;i++){
        //cout<<vis[i]<<" ";
        if(vis[i]==0){
            s.insert(i);
        }
    }
    //cout<<s.size()<<"\n";
    vector<int> rem;
    for(i=0;i<n;i++){
        if(ans[i]==-1){
            auto it=s.begin();
            rem.push_back(i);
            ans[i]=*it;
            s.erase(it);
        }
    }
    for(i=0;i<rem.size();i++){
        j=rem[i];
        k=rem[(i+1)%rem.size()];
        if(ans[j]==j){
            swap(ans[j],ans[k]);
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
        //cout<<"\n";
        cout<<endl;
        tc++;
    }
    return 0;
}