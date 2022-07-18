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
int c[100001],cnt[100001];
int n;
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
        cin>>c[i];
    }
    int cnt=0;
    for(i=0;i<n;i++){
        for(j=0;j<v[i].size();j++){
            if(c[v[i][j]]!=c[i]){
                cnt++;
            }
        }
    }
    cnt/=2;
    for(i=0;i<n;i++){
        int cnt2=0;
        for(j=0;j<v[i].size();j++){
            if(c[v[i][j]]!=c[i]){
                cnt2++;
            }
        }
        if(cnt==cnt2){
            cout<<"YES\n"<<i+1;
            return;
        }
    }
    cout<<"NO";
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