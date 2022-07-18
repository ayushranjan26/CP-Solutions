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
    cin>>s;
    n=s.size();
    vector<int> z=z_function(s);
    vector<int> v1,v2;
    for(i=0;i<n;i++){
       // cout<<z[i]<<" ";
        if(z[i]+i==n){
            v1.push_back(z[i]);
        }
        if(z[i]!=0){
            v2.push_back(z[i]);
        }
    }
    sort(v2.begin(),v2.end());
    int ans=-1;
    for(i=0;i<v1.size();i++){
        //cout<<v1[i]<<"- ";
        d1=lower_bound(v2.begin(),v2.end(),v1[i])-v2.begin();
        //cout<<d1<<"= ";
        if(d1==v2.size()){
            continue;
        }
        if(v2[d1]==v1[i]){
            if(d1!=v2.size()-1){
                ans=v1[i];
                break;
            }
        }
        if(v2[d1]>v1[i]){
            ans=v1[i];
            break;
        }
    }
    if(ans==-1){
        cout<<"Just a legend";
        return;
    }
    for(i=0;i<ans;i++){
        cout<<s[i];
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