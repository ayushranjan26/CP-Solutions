#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;
int x,y;
int calc(vector<int> &v){
    if(v.empty()){
        return 0;
    }
    int i,j,n=v.size(),cnt=0;
    vector<int> ix,iy;
    for(i=0;i<n;i++){
        if(v[i]==x){
            ix.push_back(i);
        }
        if(v[i]==y){
            iy.push_back(i);
        }
    }
    ix.push_back(n);iy.push_back(n);
    for(i=0;i<n;i++){
        int i1,i2;
        i1=lower_bound(ix.begin(),ix.end(),i)-ix.begin();
        i2=lower_bound(iy.begin(),iy.end(),i)-iy.begin();
        i1=max(ix[i1],iy[i2]);
        cnt+=n-i1;
    }
    return cnt;
}
void solve(){
    int i,j,n,m;
    cin>>n>>x>>y;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> v;
    vector<int> d;
    for(i=0;i<n;i++){
        if(a[i]<y||a[i]>x){
            v.push_back(d);
            d.clear();
        }
        else{
            d.push_back(a[i]);
        }
    }
    v.push_back(d);
    d.clear();
    int res=0;
    for(i=0;i<v.size();i++){
        res+=calc(v[i]);
        //cout<<res<<" ";
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
