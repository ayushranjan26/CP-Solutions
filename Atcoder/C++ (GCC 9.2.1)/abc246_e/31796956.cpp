#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

int dx[4]={1,1,-1,-1};
int dy[4]={1,-1,1,-1};
int n;
string s[1600];

bool chk(int x,int y){
    if(x>=0&&x<n&&y>=0&&y<n&&s[x][y]=='.'){
        return true;
    }
    else{
        return false;
    }
}
void solve(){
    int i,j,k,ax,ay,bx,by;
    cin>>n>>ax>>ay>>bx>>by;
    ax--,ay--,bx--,by--;
    for(i=0;i<n;i++){
        cin>>s[i];
    }

    int dis[n][n][4],vis[n][n][4];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<4;k++){
                vis[i][j][k]=0;
                dis[i][j][k]=1e8;
            }
        }
    }
    dis[ax][ay][0]=0;dis[ax][ay][1]=0;dis[ax][ay][2]=0;dis[ax][ay][3]=0;
    deque<pair<pii,int>> q;
    for(i=0;i<4;i++){
        int cx,cy;
        cx=ax+dx[i];
        cy=ay+dy[i];
        if(chk(cx,cy)){
            q.push_back({{cx,cy},i});
            dis[cx][cy][i]=1;
        }
    }

    while(!q.empty()){
        int dir;
        ax=q.front().ft.ft;
        ay=q.front().ft.sd;
        dir=q.front().sd;
        q.pop_front();
        //cout<<ax<<" "<<ay<<" "<<dir<<endl;
        if(ax==bx&&ay==by){
            cout<<dis[ax][ay][dir];
            return;
        }
        if(vis[ax][ay][dir]==1){
            continue;
        }
        vis[ax][ay][dir]=1;
        for(i=0;i<4;i++){
            int cx,cy;
            cx=ax+dx[i];
            cy=ay+dy[i];
            //cout<<cx<<" - "<<cy<<endl;
            if(chk(cx,cy)){
                if(dir==i){
                    if(dis[ax][ay][i]<dis[cx][cy][i]){
                        dis[cx][cy][i]=dis[ax][ay][i];
                        q.push_front({{cx,cy},i});
                    }
                }
                else{
                    if(dis[ax][ay][dir]+1<dis[cx][cy][i]){
                        dis[cx][cy][i]=dis[ax][ay][dir]+1;
                        q.push_back({{cx,cy},i});
                    }
                }
            }
        }
    }
    cout<<"-1";
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

