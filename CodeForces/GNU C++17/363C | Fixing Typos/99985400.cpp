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
    string s;
    cin>>s;
    int n=s.size();
    vector<char> v;
    for(int i1=0;i1<n;i1++){
        if(v.size()<2){
            v.pb(s[i1]);
        }
        else{
            if(v.size()>=2){
                if(v[v.size()-1]==v[v.size()-2]&&v[v.size()-1]==s[i1]){
                    continue;
                }
            }
            if(v.size()>=3){
                if(v[v.size()-1]==s[i1]&&v[v.size()-2]==v[v.size()-3]){
                    continue;
                }
            }
            v.pb(s[i1]);
        }
    }
    for(int i1=0;i1<v.size();i1++){
        cout<<v[i1];
    }
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