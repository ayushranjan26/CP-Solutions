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
    int i,j,k,n,m;
    cin>>n>>m>>i>>j;
    if(i==1&&j==1){
        cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
        return;
    }
    if(i==n&&j==m){
        cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
        return;
    }
    if(i==n&&j==1){
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        return;
    }
    if(i==1&&j==m){
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        return;
    }
    else{
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        return;
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