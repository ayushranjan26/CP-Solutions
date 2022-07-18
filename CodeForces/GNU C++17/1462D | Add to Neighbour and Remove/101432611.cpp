/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define endl "\n"
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 
using namespace std;
 
const ll mod = 1e9+7;
 
int chkpower2(int x)
{
    return (x&&!(x&x-1));
}
vector<ll> primeFactors(ll n)
{
    vector<ll> v;
    while (n%2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
    v.push_back(n);
    return v;
}
ll power(ll a,ll b){
    ll i=0;
    ll c=1;
    for(i=0; i<b; i++)
    {
        c=c*a;
        c=c%mod;
    }
    return c;
}
 
 
 
void solve(){
    int i,x,j,n,m,k;
    cin>>n;
    vector<int> a(n+1);
    int total_sum=0;
    for(i=1;i<=n;i++){
        cin>>a[i];
        total_sum+=a[i];
    }
    int ans=n-1;
    for(i=1;i<=n;i++){
        if(total_sum%i==0){
            int x=total_sum/i;
            int curr=0,cnt=0;
            for(j=1;j<=n;j++){
                curr+=a[j];
                if(curr==x){
                    curr=0;
                    cnt++;
                }
            }
            if(cnt==i){
                ans=min(ans,n-i);
            }
        }
        else{
            continue;
        }
    }
    cout<<ans;
    return;
}
int main(){
    //IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}