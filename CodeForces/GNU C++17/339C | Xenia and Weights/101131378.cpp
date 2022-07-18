/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
 
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
const ll mod = 998244353;
 
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
 
vector<int> v;
string s;
int m;
bool flag=0;
void dfs(int curr_balance,int last_weight,vector<int> ans){
    if(flag){
        return;
    }
    if(curr_balance>10||curr_balance<-10){
        return;
    }
    if(ans.size()==m){
        cout<<"YES\n";
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        flag=1;
        return;
    }
    int step=ans.size();
    for(int i=1;i<=10;i++){
        if(s[i-1]=='1'&&last_weight!=i){
            if(step%2==0&&curr_balance+i>0){
                ans.push_back(i);
                dfs(curr_balance+i,i,ans);
                ans.pop_back();
            }
            else if(step%2==1&&curr_balance-i<0){
                ans.push_back(i);
                dfs(curr_balance-i,i,ans);
                ans.pop_back();
            }
        }
    }
}
 
void solve(){
    int i,j;
    cin>>s>>m;
    vector<int> ans;
    dfs(0,0,ans);
    if(flag){
        return;
    }
    else{
        cout<<"NO";
    }
    return;
}
int main(){
   // IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}