/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
 
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
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
ll power(int a,int b){
    ll i=0;
    ll c=1;
    for(i=0;i<b;i++){
        c=c*a;
        c=c%mod;
    }
    return c;
}
 
void solve(){
    ll n,m,i,j;
    cin>>n;
    int min=n/7;
    int freq4=0,freq7=min;
    if(n%7==0){
 
    }
    else if(n%7==1){
        freq4+=2;
        freq7-=1;
    }
    else if(n%7==2){
        freq4+=4;
        freq7-=2;
    }
    else if(n%7==3){
        freq4+=6;
        freq7-=3;
    }
    else if(n%7==4){
        freq4+=1;
    }
    else if(n%7==5){
        freq4+=1;
        freq4+=2;
        freq7-=1;
    }
    else if(n%7==6){
        freq4+=1;
        freq4+=4;
        freq7-=2;
    }
    if(freq4*4+freq7*7==n&&freq4>=0&&freq7>=0){
        for(i=0;i<freq4;i++){
            cout<<"4";
        }
        for(i=0;i<freq7;i++){
            cout<<"7";
        }
    }
    else{
        cout<<"-1";
    }
    return;
}
int main()
{
    IOS;
    int t;
    t=1;//ncin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}