#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,ax,ay,bx,by;
    cin>>n>>ax>>ay>>bx>>by;
    ax--,ay--,bx--,by--;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    int dis[n][n],vis[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            dis[i][j]=1e6;
            vis[i][j]=0;
        }
    }
    queue<pii> q;
    q.push({ax,ay});
    dis[ax][ay]=0;
    vis[ax][ay]=1;
    while(!q.empty()){
        int x,y;
        x=q.front().ft;
        y=q.front().sd;
        q.pop();
        int tempx=x+1,tempy=y+1;
        while(tempx<n&&tempy<n&&s[tempx][tempy]!='#'){
            if(vis[tempx][tempy]==0){
                q.push({tempx,tempy});
            }
            if(dis[tempx][tempy]<1+dis[x][y]&&vis[tempx][tempy]==1){
                break;
            }
            dis[tempx][tempy]=min(1+dis[x][y],dis[tempx][tempy]);
            vis[tempx][tempy]=1;
            tempx++;tempy++;
        }
        tempx=x-1,tempy=y-1;
        while(tempx>=0&&tempy>=0&&s[tempx][tempy]!='#'){
            if(vis[tempx][tempy]==0){
                q.push({tempx,tempy});
            }
            if(dis[tempx][tempy]<1+dis[x][y]&&vis[tempx][tempy]==1){
                break;
            }
            dis[tempx][tempy]=min(1+dis[x][y],dis[tempx][tempy]);
            vis[tempx][tempy]=1;
            tempx--;tempy--;
        }
        tempx=x-1,tempy=y+1;
        while(tempx>=0&&tempy<n&&s[tempx][tempy]!='#'){
            if(vis[tempx][tempy]==0){
                q.push({tempx,tempy});
            }
            if(dis[tempx][tempy]<1+dis[x][y]&&vis[tempx][tempy]==1){
                break;
            }
            dis[tempx][tempy]=min(1+dis[x][y],dis[tempx][tempy]);
            vis[tempx][tempy]=1;
            tempx--;tempy++;
        }
        tempx=x+1,tempy=y-1;
        while(tempx<n&&tempy>=0&&s[tempx][tempy]!='#'){
            if(vis[tempx][tempy]==0){
                q.push({tempx,tempy});
            }
            if(dis[tempx][tempy]<1+dis[x][y]&&vis[tempx][tempy]==1){
                break;
            }
            dis[tempx][tempy]=min(1+dis[x][y],dis[tempx][tempy]);
            vis[tempx][tempy]=1;
            tempx++;tempy--;
        }
    }
    if(vis[bx][by]==0){
        cout<<"-1";
    }
    else{
        cout<<dis[bx][by];
    }
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}

