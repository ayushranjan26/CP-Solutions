/*WELCOME TO AYUSH RANJAN CODE
IITP CSE'23*/
 
#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll const INF =1e18;
ll M =1000000007;
 
void solve()
{
    int i,j,k,l,n;
    cin>>n;
    if(n%2==1){
        cout<<"Bob";
        return;
    }
    int cnt=0;
    while(n%2==0){
        n=n/2;
        cnt++;
    }
    if(n>1){
        cout<<"Alice";
        return;
    }
    if(cnt%2==1){
        cout<<"Bob";
        return;
    }
    cout<<"Alice";
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