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
    ll i,j,x,y,z,n,m,k;
    string s;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++){
        if(s[i]!='a'){
            j=n-i-1;
            cout<<"YES\n";
            for(i=0;i<n;i++){
                if(i==j&&i<n/2){
                    cout<<"a";
                }
                cout<<s[i];
                if(i==j&&i>=n/2){
                    cout<<"a";
                }
            }
            return;
        }
    }
    cout<<"NO";
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