/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define rloop(i,a,b) for(int i=(a);i>(b);i--)
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
 
ll GCD(ll a,ll b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}
 
ll LCM(ll a,ll b){
    return (a/GCD(a,b))*b;
}
 
void solve()
{
    ll i,j,k,n,d;
    cin>>n;
    ll a[n];
    set<pair<ll,ll>> s;
    for(i=0;i<n;i++){
        cin>>d;
        s.insert({d,i});
    }
    auto it=s.begin();
    ll sum=(*it).first;
    vector<ll> v;
    v.push_back((*it).second);
    it++;
    while(it!=s.end()){
        if(sum<(*it).first){
            v.clear();
        }
        v.push_back((*it).second);
        sum+=(*it).first;
        it++;
    }
    cout<<v.size()<<"\n";
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++){
        cout<<v[i]+1<<" ";
    }
    return ;
}
 
int main()
{
    //IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}