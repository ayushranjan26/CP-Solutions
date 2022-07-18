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
    ll n;
    cin>>n;
    vector<ll> v;
    v = primeFactors(n);
    map<ll,ll> m;
    for(ll i1=0;i1<v.size();i1++){
        if(m.find(v[i1])==m.end()){
            m.insert(make_pair(v[i1],0));
        }
        m[v[i1]]++;
    }
    m[1]=0;
    ll ma=1;
    ll x=v[0];
    for(auto i:m){
       // cout<<i.first<<" "<<i.second<<endl;
        if(i.second>ma){
            ma=i.second;
            x=i.first;
        }
    }
    if(ma==1){
        cout<<"1\n";
        cout<<n;
        return;
    }
    cout<<ma<<endl;
    for(ll i1=0;i1<ma-1;i1++){
        cout<<x<<" ";
    }
    ll d=n/pow(x,ma-1);
    cout<<d;
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