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
    ll i,j,n,k;
    cin>>n;
    string a,b;
    cin>>a>>b;
    ll c0=0,c1=0,c11=0,c00=0;
    j=0;
    for(i=0;i<n;i++){
        if(a[i]=='1'){
            c1++;
        }
        if(a[i]=='0'){
            c0++;
        }
        if(b[i]=='1'){
            c11++;
        }
        if(b[i]=='0'){
            c00++;
        }
 
        if(c1==c0){
            ll c=1;
            if(a[j]!=b[j]){
                c=0;
            }
            for(k=j;k<=i;k++){
                if(c==1){
                    if(a[k]!=b[k]){
                        cout<<"NO";
                        return;
                    }
                }
                if(c==0){
                    if(a[k]==b[k]){
                        cout<<"NO";
                        return;
                    }
                }
            }
            j=i+1;
        }
    }
    if(c1!=c11||c0!=c00){
        cout<<"NO";
        return;
    }
    for(i=j;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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