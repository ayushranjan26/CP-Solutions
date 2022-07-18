/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
 
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
const ll mod = 1000000007;
 
int chkpower2(int x){
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
 
void solve(){
    ll n,i,j;
    cin>>n;
    int chess[n][n];
    map<ll,ll> m1,m2;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>chess[i][j];
            m1[i+j]+=chess[i][j];
            m2[n+(i-j)-1]+=chess[i][j];
        }
    }
    
    
    ll sum1=0,sum2=0;
    ll x1=0,x2=0,y1=1,y2=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            ll x=m1[i+j]+m2[n+i-j-1]-chess[i][j];
            if((i+j)%2){
                if(x>sum1){
                    sum1=x;
                    x1=i;
                    y1=j;
                }
            }
            else{
                if(x>sum2){
                    sum2=x;
                    x2=i;
                    y2=j;
                }
            }
        }
    }
    cout<<sum1+sum2<<"\n"<<x1+1<<" "<<y1+1<<" "<<x2+1<<" "<<y2+1;
    return;
}
int main()
{
    IOS;
    int t;
    t=1;//ncin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}