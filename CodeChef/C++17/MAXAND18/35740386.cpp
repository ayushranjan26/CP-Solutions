/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}
bool comp(pair<ll,ll>& p1,pair<ll,ll>& p2){
    if(p1.first<p2.first){
        return false;
    }
    else if(p1.first==p2.first){
        if(p1.second>p2.second){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    vector<pair<ll ,ll> > v1;
    for(int i1=0;i1<31;i1++){
        v1.push_back(make_pair(0,i1));
    }
    for(int i1=0;i1<31;i1++){
        ll cnt=0;
       // cout<<cnt<<"-";
        for(int i2=0;i2<n;i2++){
            if(a[i2]&(ll)pow((ll)2,(ll)i1)){
                cnt++;
            }
        }
        //cout<<cnt<<" ";
        v1[i1].first=cnt*pow((ll)2,(ll)i1);
    }
    ll ans=0;
    sort(v1.begin(),v1.end(),comp);

    for(int i1=0;i1<k;i1++){
        ans+=pow((ll)2,(ll)v1[i1].second);
    }
    cout<<ans;
    return;
}

int main()
{
   // ios::sync_with_stdio(0);
  //  cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
