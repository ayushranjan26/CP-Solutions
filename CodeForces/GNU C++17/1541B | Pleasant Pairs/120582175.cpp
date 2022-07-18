#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
 
void solve()
{
    int i,j,k,l,n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(i=0;i<n;i++){
        cin>>k;
        v.push_back({k,i+1});
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[i].ft*v[j].ft>=2*n)break;
            if(v[i].ft*v[j].ft==v[i].sd+v[j].sd){
                ans++;
                //cout<<v[i].sd<<" "<<v[j].sd<<endl;
            }
        }
    }
    cout<<ans;
    return;
}
 
int main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}