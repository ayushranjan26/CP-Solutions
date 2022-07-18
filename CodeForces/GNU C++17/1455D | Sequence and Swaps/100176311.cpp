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
bool check(int a[],int n){
    for(int i1=0;i1<n-1;i1++){
        if(a[i1]>a[i1+1]){
            return false;
        }
    }
    return true;
}
void solve(){
    int n,x,i1;
    cin>>n>>x;
    int a[n];
    for(i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    int ans=0;
    for(int i1=0;i1<n;i1++){
        if(check(a,n)){
            break;
        }
        ans++;
        for(int i2=0;i2<n;i2++){
            if(a[i2]>x){
                swap(a[i2],x);
                break;
            }
        }
    }
    if(check(a,n)){
        cout<<ans;
    }
    else{
        cout<<-1;
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