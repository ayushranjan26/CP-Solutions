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
 
 
void solve()
{
    ll i,j,k,n,m,x;
    string a,b;
    cin>>a>>b;
    if(a.size()>b.size()){
        swap(a,b);
    }
    ll c=0;
    for(i=0;i<a.size();i++){
        for(j=0;j<b.size();j++){
            ll cnt=0;
            for(k=0;i+k<a.size();k++){
                if(a[i+k]==b[j+k]){
                    cnt++;
                }
                else{
                    c=max(c,cnt);
                    break;
                }
            }
            c=max(c,cnt);
        }
    }
    cout<<a.size()+b.size()-2*c;
    return ;
}
 
int main()
{
    IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}