/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define endl "\n"
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 
using namespace std;
 
const ll mod = 998244353;
 
int chkpower2(int x)
{
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
ll power(ll a,ll b){
    ll i=0;
    ll c=1;
    for(i=0; i<b; i++)
    {
        c=c*a;
        c=c%mod;
    }
    return c;
}
 
bool compare2(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    else{
        return a.first>b.first;
    }
}
bool compare3(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    else{
        return a.first>b.first;
    }
}
bool compare4(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    else{
        return a.first<b.first;
    }
}
void solve(){
    int i,j,n;
    cin>>n;
    vector<pair<int,int> > quad1;
    vector<pair<int,int> > quad2;
    vector<pair<int,int> > quad3;
    vector<pair<int,int> > quad4;
    int ans=0;
    for(i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x>=0&&y>=0){
            quad1.push_back(make_pair(x,y));
        }
        else if(x<=0&&y>=0){
            quad2.push_back(make_pair(x,y));
        }
        else if(x<=0&&y<=0){
            quad3.push_back(make_pair(x,y));
        }
        else{
            quad4.push_back(make_pair(x,y));
        }
 
        if(x==0||y==0){
            ans+=4;
        }
        else{
            ans+=6;
        }
    }
 
    sort(quad1.begin(),quad1.end());
    sort(quad2.begin(),quad2.end(),compare2);
    sort(quad3.begin(),quad3.end(),compare3);
    sort(quad4.begin(),quad4.end(),compare4);
    cout<<ans<<endl;
    for(i=0;i<quad1.size();i++){
        int x=quad1[i].first;
        int y=quad1[i].second;
        if(x==0){
            cout<<1<<" "<<quad1[i].second<<" U"<<endl;
            cout<<2<<endl;
            cout<<1<<" "<<quad1[i].second<<" D"<<endl;
            cout<<3<<endl;
        }
        else if(y==0){
            cout<<1<<" "<<quad1[i].first<<" R"<<endl;
            cout<<2<<endl;
            cout<<1<<" "<<quad1[i].first<<" L"<<endl;
            cout<<3<<endl;
        }
        else{
            cout<<1<<" "<<quad1[i].first<<" R"<<endl;
            cout<<1<<" "<<quad1[i].second<<" U"<<endl;
            cout<<2<<endl;
            cout<<1<<" "<<quad1[i].second<<" D"<<endl;
            cout<<1<<" "<<quad1[i].first<<" L"<<endl;
            cout<<3<<endl;
        }
    }
    for(i=0;i<quad2.size();i++){
        int x=quad2[i].first;
        int y=quad2[i].second;
        if(x==0){
            //cout<<1<<" "<<-x<<" L"<<endl;
            cout<<1<<" "<<y<<" U"<<endl;
            cout<<2<<endl;
            cout<<1<<" "<<y<<" D"<<endl;
            //cout<<1<<" "<<-x<<" R"<<endl;
            cout<<3<<endl;
        }
        else if(y==0){
            cout<<1<<" "<<-x<<" L"<<endl;
            //cout<<1<<" "<<y<<" U"<<endl;
            cout<<2<<endl;
            //cout<<1<<" "<<y<<" D"<<endl;
            cout<<1<<" "<<-x<<" R"<<endl;
            cout<<3<<endl;
        }
        else{
            cout<<1<<" "<<-x<<" L"<<endl;
            cout<<1<<" "<<y<<" U"<<endl;
            cout<<2<<endl;
            cout<<1<<" "<<y<<" D"<<endl;
            cout<<1<<" "<<-x<<" R"<<endl;
            cout<<3<<endl;
        }
    }
    for(i=0;i<quad3.size();i++){
        int x=quad3[i].first;
        int y=quad3[i].second;
        if(x==0){
            //cout<<1<<" "<<-x<<" L"<<endl;
            cout<<1<<" "<<-y<<" D"<<endl;
            cout<<2<<endl;
            cout<<1<<" "<<-y<<" U"<<endl;
            //cout<<1<<" "<<-x<<" R"<<endl;
            cout<<3<<endl;
        }
        else if(y==0){
            cout<<1<<" "<<-x<<" L"<<endl;
            //cout<<1<<" "<<y<<" D"<<endl;
            cout<<2<<endl;
            //cout<<1<<" "<<y<<" U"<<endl;
            cout<<1<<" "<<-x<<" R"<<endl;
            cout<<3<<endl;
        }
        else{
            cout<<1<<" "<<-x<<" L"<<endl;
            cout<<1<<" "<<-y<<" D"<<endl;
            cout<<2<<endl;
            cout<<1<<" "<<-y<<" U"<<endl;
            cout<<1<<" "<<-x<<" R"<<endl;
            cout<<3<<endl;
        }
    }
    for(i=0;i<quad4.size();i++){
        int x=quad4[i].first;
        int y=quad4[i].second;
        if(x==0){
            cout<<1<<" "<<x<<" R"<<endl;
            //cout<<1<<" "<<-y<<" D"<<endl;
            cout<<2<<endl;
            cout<<1<<" "<<-y<<" U"<<endl;
            //cout<<1<<" "<<x<<" L"<<endl;
            cout<<3<<endl;
        }
        else if(y==0){
            cout<<1<<" "<<x<<" R"<<endl;
            //cout<<1<<" "<<-y<<" D"<<endl;
            cout<<2<<endl;
            //cout<<1<<" "<<-y<<" U"<<endl;
            cout<<1<<" "<<x<<" L"<<endl;
            cout<<3<<endl;
        }
        else{
            cout<<1<<" "<<x<<" R"<<endl;
            cout<<1<<" "<<-y<<" D"<<endl;
            cout<<2<<endl;
            cout<<1<<" "<<-y<<" U"<<endl;
            cout<<1<<" "<<x<<" L"<<endl;
            cout<<3<<endl;
        }
    }
    return;
}
int main(){
    IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}