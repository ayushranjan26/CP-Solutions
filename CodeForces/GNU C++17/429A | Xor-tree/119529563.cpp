/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
ll M =1000000007;
vector<int> v[100001];
int n,a[100001],b[100001];
vector<int> ans;
void dfs(int idx,int prev,int pe,int po,int cnt){
    int i;
    if(cnt%2==0){
        if((a[idx]+pe)%2!=b[idx]){
           // cout<<idx<<" ";
            ans.push_back(idx);
            pe++;
        }
    }
    else{
        if((a[idx]+po)%2!=b[idx]){
           // cout<<idx<<" ";
            ans.push_back(idx);
            po++;
        }
    }
 
    for(i=0;i<v[idx].size();i++){
        if(v[idx][i]!=prev){
            dfs(v[idx][i],idx,pe,po,cnt+1);
        }
    }
    return;
}
 
void solve()
{
    int i,j,k;
    cin>>n;
    for(i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        x--,y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    dfs(0,-1,0,0,0);
    cout<<ans.size()<<endl;
    for(i=0;i<ans.size();i++){
        cout<<ans[i]+1<<"\n";
    }
    return;
}
 
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}