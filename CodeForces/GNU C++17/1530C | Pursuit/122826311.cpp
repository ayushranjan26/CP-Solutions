#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
void solve(){
    ll i,j,k,n,m;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while(a.size()!=4*n){
        a.push_back(100);
    }
    ll pre1[4*n+1]={0};
    for(i=1;i<=4*n;i++){
        pre1[i]=pre1[i-1]+a[i-1];
        //cout<<a[i-1]<<" ";
    }
    ll y=0;
    for(i=n/4;i<n;i++){
        y+=b[i];
    }
    vector<ll> v1;
    for(i=0;i<n/4;i++){
        v1.push_back(b[i]);
    }
    for(i=n;i<=4*n;i++){
        ll x;
        x=pre1[i]-pre1[i/4];
        //cout<<x<<" "<<y<<endl;
        if(x>=y){
            cout<<i-n;
            return;
        }
        if(((i+1)%4)!=0){
        if(!v1.empty()){
            y+=v1.back();
            v1.pop_back();
        }
        }
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        //cout<<"\n";
        cout<<endl;
        tc++;
    }
    return 0;
}