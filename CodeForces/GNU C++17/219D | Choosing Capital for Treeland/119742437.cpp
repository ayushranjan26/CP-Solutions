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
/*
struct node{
    int data;
    node *left,*right;
};
node* newNode(int data){
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}*/
vector<int> v[200001];
vector<int> dir[200001];
int deg[200001];
int tot=0;
vector<pair<int,int>> vp;
void dfs(int idx,int prev,int cw,int cr){
    vp.push_back({cw-cr,idx});
    for(int i=0;i<v[idx].size();i++){
        if(v[idx][i]!=prev){
            if(dir[idx][i]==1){
                dfs(v[idx][i],idx,cw,cr+1);
            }
            else{
                tot++;
                dfs(v[idx][i],idx,cw+1,cr);
            }
        }
    }
    return;
}
 
void solve()
{
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        x--,y--;
        deg[x]++,deg[y]++;
        v[x].push_back(y);
        v[y].push_back(x);
        dir[x].push_back(1);
        dir[y].push_back(-1);
    }
    for(i=0;i<n;i++){
        if(deg[i]==1){
            dfs(i,-1,0,0);
            break;
        }
    }
    vector<int> ans;
    sort(vp.rbegin(),vp.rend());
    int mn=tot-vp[0].ft;
    for(i=0;i<n;i++){
        //cout<<vp[i].ft<<" "<<vp[i].sd<<endl;
        if(vp[i].ft==vp[0].ft){
            ans.push_back(vp[i].sd+1);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<mn<<endl;
    for(i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return ;
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