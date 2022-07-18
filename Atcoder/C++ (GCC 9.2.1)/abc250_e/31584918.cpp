#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

int isPrime[1000006];

void solve(){
    int i,j,k,n,q;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }

    map<int,int> ma,mb;
    for(i=0;i<n;i++){
        if(ma.find(a[i])==ma.end()){
            ma[a[i]]=i;
        }
        if(mb.find(b[i])==mb.end()){
            mb[b[i]]=i;
        }
    }

    int posA[n],posB[n];/// posA[i] gives pos of a[i] in b[i]
    for(i=0;i<n;i++){
        if(mb.find(a[i])==mb.end()){
            posA[i]=-1;
        }
        else{
            posA[i]=mb[a[i]];
        }
        if(ma.find(b[i])==ma.end()){
            posB[i]=-1;
        }
        else{
            posB[i]=ma[b[i]];
        }
    }
    bool fg=false;
    for(i=1;i<n;i++){
        if(fg){
            posA[i]=-1;
        }
        else if(posA[i]==-1){
            fg=true;
        }
        else{
            posA[i]=max(posA[i],posA[i-1]);
        }
    }
    fg=false;
    for(i=1;i<n;i++){
        if(fg){
            posB[i]=-1;
        }
        else if(posB[i]==-1){
            fg=true;
        }
        else{
            posB[i]=max(posB[i],posB[i-1]);
        }
    }

    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        x--,y--;
        if(posA[x]==-1||posB[y]==-1){
            cout<<"No\n";
        }
        else{
            if(posA[x]<=y&&posB[y]<=x){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
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

