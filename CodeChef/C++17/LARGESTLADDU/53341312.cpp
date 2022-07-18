#include <bits/stdc++.h>

#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

int n;
int sz;
vector<int> d;
void rec(int sm,int cnt){
    if(cnt==n){
        d.push_back(sm);
    }
    else{
        if(sm%2==0){
            rec(sm/2,cnt+1);
            rec(sm/2,cnt+1);
        }
        else{
            rec(sm/2,cnt+1);
            rec(sm/2+1,cnt+1);
        }
    }
}

void solve(){
    int i,j;
    cin>>n;
    sz=(1<<n);
    int sm=0;
    vector<int> v(sz);
    for(i=0;i<sz;i++){
        cin>>v[i];
        sm+=v[i];
    }
    rec(sm,0);
    sort(v.begin(),v.end());
    sort(d.begin(),d.end());
    bool ok=true;
    for(i=0;i<sz;i++){
        //cout<<v[i]<<" "<<d[i]<<endl;
        if(v[i]!=d[i]){
            ok=false;
        }
    }
    if(ok){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    d.clear();
    return;
}

int32_t main(){
    IOS;
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
