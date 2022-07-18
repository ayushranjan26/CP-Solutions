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
    ll i,j,k,n,u;
    cin>>n>>k;
 
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
 
    sort(a,a+n);
 
    ll m1,m2;
 
    m1=a[n-1];
    j=0;
    for(i=0;i<n;i++){
        if(a[i]!=j){
            break;
        }
        j++;
    }
    m2=j;
    if(k==0){
        cout<<n;
        return;
    }
    if(m1+1==m2){
        cout<<n+k;
        return;
    }
    if(m1+1!=m2){
        u=(m1+m2)/2;
        if((m1+m2)%2!=0){
            u++;
        }
        for(i=0;i<n;i++){
            if(a[i]==u){
                cout<<n;
                return;
            }
        }
        cout<<n+1;
        return;
    }
    return;
}
 
int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}