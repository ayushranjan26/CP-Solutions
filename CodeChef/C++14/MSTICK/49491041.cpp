#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
ll a[100005];
ll st1[100005][26],st2[100005][26];
void solve(){
    int i,j,k,n,q;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    k=26;
    for(i=0;i<n;i++){
        st1[i][0]=a[i];
        st2[i][0]=a[i];
    }
    for(j=1;j<=k;j++){
        for(i=0;i+(1<<j)<=n;i++){
            st1[i][j]=min(st1[i][j-1],st1[i+(1<<(j-1))][j-1]);
            st2[i][j]=max(st2[i][j-1],st2[i+(1<<(j-1))][j-1]);
        }
    }
    int log[n+1];
    log[1]=0;
    for(i=2;i<=n;i++){
        log[i]=log[i/2]+1;
    }
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        j=log[r-l+1];
        ll mn,mx1,mx2=0;
        mn=min(st1[l][j],st1[r-(1<<j)+1][j]);
        mx1=max(st2[l][j],st2[r-(1<<j)+1][j]);
        if(l!=0){
            int r1,l1;
            r1=l-1,l1=0;
            j=log[r1-l1+1];
            mx2=max({st2[l1][j],st2[r1-(1<<j)+1][j],mx2});
        }
        if(r!=n-1){
            int r1,l1;
            r1=n-1,l1=r+1;
            j=log[r1-l1+1];
            mx2=max({st2[l1][j],st2[r1-(1<<j)+1][j],mx2});
        }
        long double ans=1.0*mn;
        if(mx1-mn>2*mx2){
            ans+=((1.0*(mx1-mn))/2.0);
        }
        if(mx1-mn<=2*mx2){
            ans+=(1.0*mx2);
        }
        cout<<fixed<<setprecision(1)<<ans<<endl;
    }
    return;
}

int main(){
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
