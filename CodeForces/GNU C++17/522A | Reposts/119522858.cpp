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
map<string,vector<string>> v;
map<string,int> vis;
int ans=0;
void dfs(string idx,int height){
    int i,j;
    vector<string> v1=v[idx];
    for(i=0;i<v1.size();i++){
        //cout<<v1[i]<<" ";
        dfs(v1[i],height+1);
    }
    ans=max(ans,height);
}
void solve()
{
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++){
        string a,b,c;
        cin>>a>>b>>c;
        transform(a.begin(),a.end(),a.begin(),::tolower);
        transform(b.begin(),b.end(),b.begin(),::tolower);
        transform(c.begin(),c.end(),c.begin(),::tolower);
        v[c].push_back(a);
        vis[c]=0;
        vis[a]=0;
    }
    dfs("polycarp",1);
    cout<<ans;
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