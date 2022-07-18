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
    int n,m;
    cin>>n>>m;
    ll ans=0;
    vector<int> vp,vn;
    for(int i1=0;i1<n;i1++){
        for(int i2=0;i2<m;i2++){
            int d;
            cin>>d;
            if(d>=0){
                vp.push_back(d);
            }
            else{
                vn.push_back(d);
            }
        }
    }
    sort(vn.begin(),vn.end());
    sort(vp.begin(),vp.end());
    //cout<<ans<<" ";
    if(vn.size()%2==0){
        for(int i1=0;i1<vp.size();i1++){
            ans+=abs(vp[i1]);
        }
        for(int i1=0;i1<vn.size();i1++){
            ans+=abs(vn[i1]);
        }
    }
    else{
        for(int i1=1;i1<vp.size();i1++){
            ans+=abs(vp[i1]);
        }
        for(int i1=0;i1<vn.size()-1;i1++){
            ans+=-vn[i1];
        }
        if(vp.size()!=0){
            ans-=min(abs(vp[0]),abs(vn[vn.size()-1]));
            ans+=max(abs(vp[0]),abs(vn[vn.size()-1]));
        }
        else{
            ans-=abs(vn[vn.size()-1]);
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