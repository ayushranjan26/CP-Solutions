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
 
void solve(){
    int n,m,k,i,j;
    cin>>n>>m;
 
    string a[n];
 
    for(i=0;i<n;i++){
        string s;
        cin>>a[i];
    }
    int ans=0;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]=='*'){
                mat[i][j]=1;
                ans++;}
            else{
                mat[i][j]=0;
            }
        }
    }
 
    for(k=1;k<=n;k++){
        for(i=1;i<n;i++){
            for(j=1;j<m-1;j++){
                if(mat[i][j]>=k&&mat[i][j-1]>=k&&mat[i][j+1]>=k&&mat[i-1][j]>=k){
                    mat[i][j]=k+1;
                    ans++;
                }
            }
 
        }
    }
    /*for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]=='*'){
                int x,y;
                x=i;
                y=j;
                int k=0;
                bool f=1;
                for(int i1=x;i1<n;i1++){
                    for(int i2=y-k;i2<=y+k;i2++){
                        if(a[i1][i2]!='*'||i2<0||i2>=m){
                            f=0;
                            break;
                        }
                    }
                    if(f==0){
                        break;
                    }
                    ans++;
                    k++;
                }
            }
        }
 
    }*/
    cout<<ans;
    return;
}
int main(){
   // IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}