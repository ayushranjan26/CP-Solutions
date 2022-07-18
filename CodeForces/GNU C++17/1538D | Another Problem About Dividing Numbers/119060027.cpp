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
 
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll cnt=0;
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cnt++;
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cnt++;
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cnt++;
}
 
void solve()
{
    ll i,j,k,n,l,r,a,b;
    cin>>a>>b>>k;
    ll g=gcd(a,b);
    cnt=0;
    primeFactors(g);
    ll x=2*cnt;
    cnt=0;
    primeFactors(a/g);
    x+=cnt;
    cnt=0;
    primeFactors(b/g);
    x+=cnt;
    if((a==g||b==g)&&a!=b){
        if(k<=x){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        if(k<=x&&k>1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
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