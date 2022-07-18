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
    ll i,j,k,n;
    cin>>n;
    ll p[n],l[n]={0},r[n]={0};
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    for(i=1;i<n;i++){
        if(p[i]>p[i-1]){
            l[i]=l[i-1]+1;
        }
    }
    for(i=n-2;i>=0;i--){
        if(p[i]>p[i+1]){
            r[i]=r[i+1]+1;
        }
    }
    k=max_element(l,l+n)-l;
    for(i=0;i<n;i++){
        //cout<<l[k]<<" "<<r[k]<<endl;
        if(i!=k&&(l[i]>=l[k]||r[i]>=r[k])){
            //cout<<l[i]<<" "<<r[i]<<endl;
            cout<<0;
            return;
        }
    }
    if(r[k]==l[k]&&r[k]%2==0){
        cout<<"1";
        return;
    }
    else{
        cout<<"0";
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