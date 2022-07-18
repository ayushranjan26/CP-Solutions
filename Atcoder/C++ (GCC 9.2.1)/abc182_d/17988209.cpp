/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
#define IOS cin.tie(NULL);cout.tie(NULL)
using namespace std;

const int mod = 1000000007;

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
    int n;
    cin>>n;
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    int gcd_ness[1001]={0};
    for(int i1=2;i1<=1000;i1++){
        for(int i2=0;i2<n;i2++){
            if(a[i2]%i1==0){
                gcd_ness[i1]++;
            }
        }
    }
    int ans=0;
    int cnt=0;
    for(int i1=2;i1<1001;i1++){
        if(gcd_ness[i1]>cnt){
            ans=i1;
            cnt=gcd_ness[i1];
        }
    }
    cout<<ans;
    return;
}
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
