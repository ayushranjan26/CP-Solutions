/*WELCOME TO AYUSH RANJAN CODE'S*/
 
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
int ask(int l, int r) {
    if (l >= r) return -1;
    cout << "? " << l+1 << ' ' << r+1  << endl;
    int ans;
    cin >> ans;
    return ans-1;
}
 
void solve()
{
    int i,j,k,q,n,y,x,z;
    cin>>n;
    ll l=0,r=n;
    while(l<r-1){
        ll m=(l+r)/2;
        q=ask(l,r-1);
        if(q<m){
            if(ask(l,m-1)==q){
                r=m;
            }
            else{
                l=m;
            }
        }
        else{
            if(ask(m,r-1)==q) {
                l=m;
            }
            else{
                r=m;
            }
        }
    }
    cout<<"! "<<r<<endl;
    return;
}
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}