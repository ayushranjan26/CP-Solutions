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
 
ll a[105][105];
void solve()
{
    ll i,j,n,m,k,a,b;
    cin>>n;
    vector<pair<ll,ll>> v1,v2;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i+j)%2){
                v1.push_back({i,j});
            }
            else{
                v2.push_back({i,j});
            }
        }
    }
    for(i=0;i<n*n;i++){
        cin>>a;
        if(a==1){
            if(v2.size()){
                cout<<"2 "<<v2[v2.size()-1].ft<<" "<<v2[v2.size()-1].sd<<endl;
                v2.pop_back();
            }
            else{
                cout<<"3 "<<v1[v1.size()-1].ft<<" "<<v1[v1.size()-1].sd<<endl;
                v1.pop_back();
            }
        }
        else if(a==2){
            if(v1.size()){
                cout<<"1 "<<v1[v1.size()-1].ft<<" "<<v1[v1.size()-1].sd<<endl;
                v1.pop_back();
            }
            else{
                cout<<"3 "<<v2[v2.size()-1].ft<<" "<<v2[v2.size()-1].sd<<endl;
                v2.pop_back();
            }
 
        }
        else{
            if(v2.size()){
                cout<<"2 "<<v2[v2.size()-1].ft<<" "<<v2[v2.size()-1].sd<<endl;
                v2.pop_back();
            }
            else{
                cout<<"1 "<<v1[v1.size()-1].ft<<" "<<v1[v1.size()-1].sd<<endl;
                v1.pop_back();
            }
        }
    }
    return ;
}
 
int main()
{
    //IOS;
    ll t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}