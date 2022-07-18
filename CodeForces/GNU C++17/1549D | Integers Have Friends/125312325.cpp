#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
const int N=200005;
ll a[N],diff[N],st[N][31],lg[N];
void solve(){
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        diff[i]=abs(a[i]-a[i+1]);
       // cout<<diff[i]<<" ";
    }
    n--;
    for(i=0;i<n;i++){
        st[i][0]=diff[i];
    }
    for(j=1;j<=30;j++){
        for(i=0;i+(1<<j)<=n;i++){
            st[i][j]=__gcd(st[i][j-1],st[i+(1<<(j-1))][j-1]);
            //cout<<st[i][j]<<" ";
        }
        //cout<<endl;
    }
    int lo=1,hi=n,ans=0;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        //cout<<mid<<" "<<lo<<" "<<hi<<endl;
        bool flg=false;
        int j=lg[mid];
        for(i=0;i+mid<=n;i++){
            ll temp=__gcd(st[i][j],st[i+mid-(1<<j)][j]);
            if(temp>1){
                //cout<<temp<<" "<<i<<" "<<i+mid-(1<<j)<<"- \n";
                flg=true;
                break;
            }
        }
        if(flg){
            lo=mid+1;
            ans=max(ans,mid);
        }
        else{
            hi=mid-1;
        }
    }
    cout<<ans+1;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    lg[1]=0;
    for(int i=2;i<N;i++){
        lg[i]=lg[i/2]+1;
    }
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}