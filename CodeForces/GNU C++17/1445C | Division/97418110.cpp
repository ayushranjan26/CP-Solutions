/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
#define IOS cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
vector<ll> primeFactors(ll n)
{
    // Print the number of 2s that divide n
    vector<ll> v;
    while (n%2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
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
    ll p,q;
    cin>>p>>q;
    if(p%q!=0){
        cout<<p;
        return;
    }
    if(p<q){
        cout<<p;
        return;
    }
    vector<ll> vq;
    vq=primeFactors(q);
    map<ll,ll> mq;
 
    for(int i1=0;i1<vq.size();i1++){
        if(mq.find(vq[i1])==mq.end()){
            mq[vq[i1]]=0;
        }
        mq[vq[i1]]++;
    }
 
    ll ans=0;
    ll mi=10e18;
 
    for(auto i:mq){
        //cout<<i.first<<" "<<i.second<<endl;
        ll d=p;
        while(d%i.first==0&&i.first!=1){
            d=d/i.first;
        }
        d=d*pow(i.first,i.second-1);
        if(i.first!=1){
            ans=max(ans,d);
        }
    }
 
    cout<<ans;
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