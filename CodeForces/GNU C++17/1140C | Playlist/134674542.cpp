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
    cin>>n>>k;
    vector<pii> vp;
    for(i=0;i<n;i++){
        int pl,ln;
        cin>>ln>>pl;
        vp.push_back({pl,ln});
    }
    sort(vp.rbegin(),vp.rend());
    int sm=0,res=0;
    multiset<int> ssm;
    for(i=0;i<n;i++){
        if(ssm.size()>=k){
            sm-=*ssm.begin();
            ssm.erase(ssm.begin());
        }
        sm+=vp[i].sd;
        //cout<<sm<<" ";
        res=max(res,vp[i].ft*sm);
        ssm.insert(vp[i].sd);
    }
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