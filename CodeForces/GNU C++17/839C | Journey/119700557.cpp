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
 
struct node{
    int data;
    node *left,*right;
};
node* newNode(int data){
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
vector<int> v[100001];
int n;
double ans=0.000000;
void dfs(int idx,int prev,int depth,double prob){
    for(int i=0;i<v[idx].size();i++){
        if(v[idx][i]!=prev){
            int z=v[idx].size();
            z--;
            dfs(v[idx][i],idx,depth+1,prob/(double)z);
        }
    }
    if(v[idx].size()==1){
        //cout<<depth<<" "<<prob<<"\n";
        ans+=depth*prob;
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
    if(n==1){
        cout<<"0.0000000";
        return;
    }
    for(i=0;i<v[0].size();i++){
        dfs(v[0][i],0,1,(double)1/(double)v[0].size());
    }
    cout<<fixed<<setprecision(9)<< ans;
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