/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
 
#define IOS cin.tie(NULL);cout.tie(NULL)
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
    ll n,x,i;
    cin>>x;
    ll sum1=0;
    for(ll i1=1;i1<=10000000;i1++){
        sum1+=i1;
        //  cout<<sum1<<endl;
        if(sum1>=x){
            i=i1;
            break;
        }
    }
    n=sum1-x;
    if(sum1==x){
        cout<<i;
    }
    else{
        if(n==1){
            cout<<i+1;
            return;
        }
        cout<<i;
    }
    return;
}
int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}