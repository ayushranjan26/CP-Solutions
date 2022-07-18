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
    int a,b,n,i;
    n=s.size();
    cin>>a>>b;
    int pre[n]={0},suf[n]={0};
 
    pre[0]=((int)s[0]-(int)'0')%a;
    for(int i1=1;i1<n;i1++){
        int c=(int)(s[i1]-'0');
        pre[i1]=((pre[i1-1])*10+c%a)%a;
    }
 
    suf[n-1]=((int)s[n-1]-(int)'0')%b;
    int x=1;
    for(int i1=n-2;i1>=0;i1--){
        int c=(int)(s[i1]-'0');
        x=(x*10)%b;
        suf[i1]=(c*x+suf[i1+1])%b;
    }
    for(int i1=0;i1<n-1;i1++){
        if(pre[i1]==suf[i1+1]&&pre[i1]==0&&s[i1+1]!='0'){
            cout<<"YES\n";
            for(int i2=0;i2<=i1;i2++){
                cout<<s[i2];
            }
            cout<<"\n";
            for(int i2=i1+1;i2<n;i2++){
                cout<<s[i2];
            }
            return;
        }
    }
    cout<<"NO";
    return;
}
int main()
{
    //IOS;
    int t;
    t=1;//ncin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}