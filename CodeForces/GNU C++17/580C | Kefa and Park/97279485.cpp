/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
#define IOS cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
int ans=0;
int n,m;
int a[100002];
vector<int> vec[100002];
void dfs(int cat_count,int node,int check[100002],int flag){
   // cout<<node<<" "<<ans<<endl;
    check[node]=1;
    if(a[node-1]==0){
        cat_count=0;
    }
    if(a[node-1]==1){
        cat_count++;
    }
    if(cat_count>m){
        flag=1;
        return;
    }
    int cnt=0;
    for(int i1=0;i1<vec[node].size();i1++){
        if(check[vec[node][i1]]==0){
            cnt++;
            dfs(cat_count,vec[node][i1],check,flag);
        }
    }
 
    if(flag==0&&cnt==0)
        ans++;
}
 
void solve(){
    cin>>n>>m;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
 
    for(int i1=0;i1<n-1;i1++){
        int d1,d2;
        cin>>d1>>d2;
        vec[d1].push_back(d2);
        vec[d2].push_back(d1);
    }
 
    int check[100002]={0};
    int cat_count=0;
    dfs(cat_count,1,check,0);
    cout<<ans;
    return;
}
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}