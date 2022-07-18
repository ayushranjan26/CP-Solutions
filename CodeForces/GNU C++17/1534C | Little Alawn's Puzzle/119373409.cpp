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
 
void solve()
{
    ll i,j,k,n,m;
    cin>>n;
    ll ans=0;
    ll a[n];
    ll b[n];
    ll a1[n];
    ll b1[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        a[i]--;
        a1[a[i]]=i;
    }
    for(i=0;i<n;i++){
        cin>>b[i];
        b[i]--;
        b1[b[i]]=b[i];
    }
    ll a3[n]={0},b3[n]={0};
    for(i=0;i<n;i++){
        if(a3[i]==0){
            a3[i]=i;
            j=a1[b[i]];
            while(i!=j){
                a3[j]=i;
                j=a1[b[j]];
                a3[j]=i;
            }
        }
    }
    set<ll> s1;
    for(i=0;i<n;i++){
        s1.insert(a3[i]);
    }
    ans=1;
    j=s1.size();
    while(j--){
        ans*=2;
        ans%=M;
    }
    cout<<ans;
    return;
}
 
int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}