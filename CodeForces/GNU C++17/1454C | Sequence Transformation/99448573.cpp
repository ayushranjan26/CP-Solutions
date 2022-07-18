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
    vector<int> arr;
    int f[200002]={0};
    for(int i1=0;i1<n;i1++){
        int d;
        cin>>d;
        arr.push_back(d);
        if(arr.size()>1&&arr[arr.size()-1]==arr[arr.size()-2]){
            continue;
        }
        f[d]++;
    }
    int fl=0;
    for(int i1=0;i1<n-1;i1++){
        if(arr[i1]!=arr[i1+1]){
            fl=1;
        }
    }
    if(fl==0){
        cout<<"0";
        return;
    }
 
    if(f[arr[0]]==1){
        cout<<1;
        return;
    }
    else{
        f[arr[0]]--;
    }
    if(f[arr[arr.size()-1]]==1){
        cout<<1;
        return;
    }
    else{
        f[arr[arr.size()-1]]--;
    }
    int ans=n+1;
    for(int i1=0;i1<n;i1++){
        ans=min(ans,f[arr[i1]]);
    }
    cout<<ans+1;
 
 
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