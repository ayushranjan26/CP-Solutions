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
    int n,i;
    cin>>n>>i;
    string s;
    cin>>s;
    vector<int> v;
    if(n%2==0){
        if(i<=n/2){
            for(int i1=0;i1<n/2;i1++){
                if(s[i1]!=s[n-i1-1]){
                    v.push_back(i1);
                }
            }
        }
        else{
            for(int i1=0;i1<n/2;i1++){
                if(s[i1]!=s[n-i1-1]){
                    v.push_back(n-i1-1);
                }
            }
        }
    }
    else{
        if(i<=(n+1)/2){
            for(int i1=0;i1<=n/2;i1++){
                if(s[i1]!=s[n-i1-1]){
                    v.push_back(i1);
                }
            }
        }
        else{
            for(int i1=0;i1<=n/2;i1++){
                if(s[i1]!=s[n-i1-1]){
                    v.push_back(n-1-i1);
                }
            }
        }
    }
    int a1=0,a2=0,ans=0;
    i--;
    if(v.empty()){
        cout<<"0";
        return;
    }
    sort(v.begin(),v.end());
    for(int i1=0;i1<v.size();i1++){
        ans+=min(abs((int)s[v[i1]]-(int)s[n-1-v[i1]]),26-abs((int)s[v[i1]]-(int)s[n-1-v[i1]]));
       // cout<<v[i1]<<" "<<ans<<endl;
    }
    a1=abs(v[v.size()-1]-i)+v[v.size()-1]-v[0];
    a2=abs(i-v[0])+v[v.size()-1]-v[0];
    cout<<ans+min(a1,a2);
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