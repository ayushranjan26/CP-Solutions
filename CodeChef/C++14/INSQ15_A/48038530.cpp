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
vector<int> z_function(string s){
    int n=s.size();
    vector<int> z(n);
    int l=0,r=0;
    for(int i=1;i<n;i++){
        if(i<=r){
            z[i]=min(r-i+1,z[i-l]);
        }
        while(i+z[i]<n&&s[i+z[i]]==s[z[i]]){
            z[i]++;
        }
        if(i+z[i]-1>r){
            l=i,r=i+z[i]-1;
        }
    }
    return z;
}
void solve()
{
    int i,j,k,l,n,q;
    string s;
    cin>>s>>q;
    n=s.size();
    vector<int> z=z_function(s);
    while(q--){
        int p;
        cin>>p;
        cout<<min({z[p],p,n-p})<<"\n";
    }
    return;
}

int main()
{
    IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        //cout<<endl;
    }
    return 0;
}
