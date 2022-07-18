#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
class Fenwick{//1 based indexing
public:
    int sz;
    vector<int> BIT;
 
    void init(int n){
        sz=n+1;
        BIT.assign(sz+1,0);
    }
    void update(int i,int v){
        while(i<=sz){
            BIT[i]+=v;
            i+=(i&(-i));
        }
    }
    int sum(int x){
        int res=0;
        while(x){
            res+=BIT[x];
            x-=(x&(-x));
        }
        return res;
    }
};
 
 
void solve(){
    int i,j,k,n,q;
    cin>>n;
    map<int,int> mp;
    int a[n];
    for(i=0;i<n;i++){
        cin>>k;
        mp[k]++;
        a[i]=k;
    }
    int idx=1;
    map<int,int> mi;
    for(auto it:mp){
        mi[it.ft]=idx;
        idx++;
    }
    //cout<<idx<<" ";
    Fenwick ft;
    ft.init(idx-1);
    int res=0;
    for(i=0;i<n;i++){
        int l,r;
        l=ft.sum(mi[a[i]]-1);
        r=ft.sum(idx-1)-ft.sum(mi[a[i]]);
        //cout<<l<<" "<<r<<"\n";
        res+=min(l,r);
        ft.update(mi[a[i]],1);
    }
    cout<<res;
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