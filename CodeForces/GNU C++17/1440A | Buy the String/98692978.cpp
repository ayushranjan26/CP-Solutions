/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
 
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
    int n,i,j,c0,c1,h;
    cin>>n>>c0>>c1>>h;
    int ct0=0,ct1=0;
    string s;
    cin>>s;
 
    for(i=0;i<n;i++){
        if(s[i]=='0'){
            ct0++;
        }
        else{
            ct1++;
        }
    }
    int p0=min(ct0*c0,ct0*(c1+h));
    int p1=min(ct1*c1,ct1*(c0+h));
    cout<<p0+p1;
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