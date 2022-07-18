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
    int i,j,n,k;
    cin>>n;
    int a[n],pre=0;
    set<int> v;
    v.insert(0);
    for(i=0;i<n;i++){
        cin>>a[i];
        v.insert(pre%360);
        //cout<<pre%360<<" ";
        pre+=a[i];
    }
    v.insert(pre%360);
    int res=0;
    if(v.size()==1){
        res=360;
    }
    vector<int> v2;
    while(!v.empty()){
        int d=*v.begin();
        //cout<<d<<" ";
        v2.push_back(d);
        v.erase(v.begin());
    }
    for(i=1;i<v2.size();i++){
        res=max(res,v2[i]-v2[i-1]);
    }
    res=max(res,360-v2[v2.size()-1]);
    cout<<res;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
