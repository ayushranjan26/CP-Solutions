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
ll const INF =1e18;
using namespace std;
 
void solve()
{
    ll i,j,k,q,n,m,y,x,z;
    cin>>n>>q;
    int a[n],c0=0,c1=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            c0++;
        }
        else{c1++;}
    }
 
    while(q--){
        cin>>z>>x;
        if(z==1){
            a[x-1]=1-a[x-1];
            if(a[x-1]==0){
                c1--;
                c0++;
            }
            else{
                c1++;
                c0--;
            }
        }
        else{
            if(x>c1){
                cout<<"0\n";
            }
            else{
                cout<<"1\n";
            }
        }
 
    }
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