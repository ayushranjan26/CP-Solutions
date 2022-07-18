#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//

void solve()
{
    ll i,j,k,l,n,m;
    cin>>n>>m>>k;
    vector<pair<int,int>> vp;
    for(l=0;l<n*m;l++){
        cin>>i>>j;
        vp.push_back({i,j});
    }
    
    int low=0,high=n*m-1,ans=n*m;
    while(low<=high){
        int a[n+1][m+1];
        for(i=0;i<=n;i++){
            for(j=0;j<=m;j++){
                a[i][j]=0;
            }
        }

        int mid=(high+low)/2;
        for(i=0;i<=mid;i++){
            int x,y;
            x=vp[i].ft,y=vp[i].sd;
            if(i%2==0){
                a[x][y]=1;
            }
            else{
                a[x][y]=-1;
            }
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            }
        }
        bool chk=false;
        for(i=k;i<=n;i++){
            for(j=k;j<=m;j++){
                int sm=a[i][j]-a[i-k][j]-a[i][j-k]+a[i-k][j-k];
                if(abs(sm)==k*k){
                    chk=true;
                }
            }
        }
        if(chk){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(ans==n*m){
        cout<<"Draw";
    }
    else{
        if(ans%2==0){
            cout<<"Alice";
        }
        else{
            cout<<"Bob";
        }
    }
    return;
}

int main(){
    //  qqIOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
