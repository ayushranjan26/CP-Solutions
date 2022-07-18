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
    int a,n,b;
    cin>>a>>b;
    string s;
    cin>>s;
    n=s.size();
    vector<int> v1;
    vector<int> v2;
    for(int i1=0;i1<n;i1++){
        if(s[i1]=='1'){
            v1.push_back(i1);
        }
 
    }
 
    vector<int> vone;
    for(int i1=1;i1<v1.size();i1++){
        int d=v1[i1]-v1[i1-1]-1;
        if(d!=0){
            vone.push_back(d);
        }
    }
    if(vone.size()==0){
        if(v1.size()!=0){
            cout<<a;
            return;
        }
        else{
            cout<<"0";
            return;
        }
    }
    ll ans=0;
    int i1=0;
    while(i1<vone.size()){
        if(a<b*vone[i1]){
            ans+=a;
        }
        else{
            ans+=b*vone[i1];
        }
        i1++;
    }
    ans+=a;
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