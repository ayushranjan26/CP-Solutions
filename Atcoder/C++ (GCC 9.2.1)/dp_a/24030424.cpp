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
    ll i,j,k,n,d1,i1;
    cin>>n>>k;
    vector<pair<ll,ll>> vp;
    for(i=0;i<n;i++){
        cin>>d1;
        vp.push_back({d1,i});
    }
    sort(vp.begin(),vp.end());
    vector<pair<ll,ll> >ans;
    for(i=0;i<n;i++){
        d1=k/n;
        if(i<k%n){
            d1++;
        }
        i1=vp[i].sd;
        ans.push_back({i1,d1});
    }
    sort(ans.begin(),ans.end());
    for(i=0;i<n;i++){
        cout<<ans[i].sd<<"\n";
    }
    return;
}

int main(){
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}

