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
ll test=0;
void solve()
{
    test++;
    ll i,j,k,n,c;
    cin>>n>>c;
    ll a[n],b[n-1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        cin>>b[i];
    }
    ll mny=0,days=0;
    ll d[n];
 
    d[0]=c/a[0];
    if(c%a[0]){
        d[0]++;
    }
    days++;
    ll dd=0;
    dd=b[0]/a[0];
    if(b[0]%a[0]){
        dd++;
    }
    days+=dd;
    mny=dd*a[0]-b[0];
    for(i=1;i<n-1;i++){
        //cout<<days<<" ";
        d[i]=(c-mny)/a[i]+days;
        if((c-mny)%a[i]){
            d[i]++;
        }
        days++;
        if(mny>=b[i]){
            mny-=b[i];
            continue;
        }
 
        dd=0;
        dd=(b[i]-mny)/a[i];
        if((b[i]-mny)%a[i]){
            dd++;
        }
        days+=dd;
        mny+=dd*a[i]-b[i];
    }
 
    d[n-1]=(c-mny)/a[n-1]+days;
    if((c-mny)%a[n-1]){
            d[n-1]++;
    }
 
    ll ans=INF;
    for(i=0;i<n;i++){
        ans=min(ans,d[i]);
    }
    cout<<ans;
    return ;
}
int main()
 
{
    //IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
       cout<<"\n";
    }
    return 0;
}
/*
1
3 20
3 4 10
1 2
*/