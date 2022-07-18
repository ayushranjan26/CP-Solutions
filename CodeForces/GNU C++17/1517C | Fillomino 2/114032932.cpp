/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define rloop(i,a,b) for(int i=(a);i>(b);i--)
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
ll M =1000000007;
ll a[600][600];
ll cnt[600],n;
 
void rec(ll r,ll c,ll d){
    if(r>=n||c>=n||r<0||c<0||c>r||a[r][c]!=0){
        return;
    }
    if(cnt[d]==d){
        return;
    }
 
    a[r][c]=d;
    cnt[d]++;
   // cout<<a[r][c]<<" ";
    rec(r-1,c,d);
    rec(r,c-1,d);
    rec(r+1,c,d);
    rec(r,c+1,d);
    return;
}
void solve()
{
    ll i,j,k,m,d;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i][i];
    }
    for(i=0;i<n;i++){
        d=a[i][i];
        cnt[d]++;
        rec(i-1,i,d);
        rec(i,i-1,d);
        rec(i+1,i,d);
        rec(i,i+1,d);
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
 
int main()
 
{
    //IOS;
    ll t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}