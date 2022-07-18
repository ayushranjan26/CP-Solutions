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
    int i,j,k,l,n,d1;
    string s;
    cin>>n>>k;
    cin>>s;
    s+=s;
    n*=2;
    vector<int> z=z_function(s);
    int i1=-1;
    for(i=1;i<n;i++){
        if(i+z[i]<n&&s[i+z[i]]>s[z[i]]){
            i1=i;
            break;
        }
    }
    string ans="";
    if(i1==-1){
        ans=s;
    }
    for(i=0;i<i1;i++){
        ans+=s[i];
    }
    while(ans.size()<k){
        ans+=ans;
    }
    for(i=0;i<k;i++){
        cout<<ans[i];
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
        cout<<endl;
    }
    return 0;
}