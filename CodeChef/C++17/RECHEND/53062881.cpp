#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,k,n;
    cin>>n;
    vector<pii> v,u;
    for(i=0;i<n;i++){
        cin>>j>>k;
        v.push_back({j,k});
        u.push_back({n-j+1,n-k+1});
    }
    sort(v.begin(),v.end());
    int d=v[0].ft+v[0].sd,cnt=0;
    for(i=0;i<n;i++){
        if(v[i].ft+v[i].sd==d){
            cnt++;
        }
        else{
            break;
        }
    }
    if(cnt==d-1){
        cout<<"no";
        return;
    }

    sort(u.begin(),u.end());
    d=u[0].ft+u[0].sd,cnt=0;
    for(i=0;i<n;i++){
        if(u[i].ft+u[i].sd==d){
            cnt++;
        }
        else{
            break;
        }
    }
    if(cnt==d-1){
        cout<<"no";
        return;
    }

    cout<<"yes";
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
