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
ll gcd(ll a,ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve()
{
    ll i,j,k,n,m,x,cq;
    string s,s1,s2;
    cin>>s;
    s1=s;
    s2=s;
    n=s.size();
    ll a1[n]={0},a2[n]={0};
    for(i=0;i<n;i++){
        if(i%2==0&&s[i]=='?'){
            s1[i]='0';
        }
        if(i%2==1&&s[i]=='?'){
            s1[i]='1';
        }
    }
    for(i=0;i<n;i++){
        if(i%2==1&&s[i]=='?'){
            s2[i]='0';
        }
        if(i%2==0&&s[i]=='?'){
            s2[i]='1';
        }
    }
 
    for(i=0;i<n;i++){
        if(i%2==0&&s1[i]=='0'){
            a1[i]=1;
        }
        if(i%2==1&&s1[i]=='1'){
            a1[i]=1;
        }
    }
    for(i=0;i<n;i++){
        if(i%2==1&&s2[i]=='0'){
            a2[i]=1;
        }
        if(i%2==0&&s2[i]=='1'){
            a2[i]=1;
        }
    }
 
    ll a3[n]={0};
    for(i=0;i<n;i++){
        if(a1[i]==a2[i]&&a1[i]==1){
            a3[i]=1;
        }
    }
    for(i=1;i<n;i++){
        if(a1[i]==1){
            a1[i]+=a1[i-1];
        }
        if(a2[i]==1){
            a2[i]+=a2[i-1];
        }
        if(a3[i]==1){
            a3[i]+=a3[i-1];
        }
    }
    ll ans=0;
    for(i=0;i<n;i++){
        ans+=a1[i]+a2[i]-a3[i];
        //cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<"\n";
    }
    //cout<<s1<<" "<<s2;
    cout<<ans;
    return;
}
 
int main()
{
    //IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}