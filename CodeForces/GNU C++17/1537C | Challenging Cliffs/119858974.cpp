/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
ll M =1000000007;
 
void solve()
{
    int i,j,k,n;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(n==2){
        cout<<v[0]<<" "<<v[1];
        return;
    }
    int mn=v[1]-v[0];
    for(i=0;i<n-1;i++){
        mn=min(mn,v[i+1]-v[i]);
    }
    int i1=0,j1=1;
    for(i=1;i<n;i++){
        if(v[i]-v[i-1]==mn){
            i1=i-1;
            j1=i;
            break;
        }
    }
    for(i=j1;i<n;i++){
        cout<<v[i]<<" ";
    }
    for(i=0;i<=i1;i++){
        cout<<v[i]<<" ";
    }
    return ;
}
 
int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}