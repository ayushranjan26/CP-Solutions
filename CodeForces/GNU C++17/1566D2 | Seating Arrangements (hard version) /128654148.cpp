#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    int a[n*m],b[n*m];
    for(i=0;i<n*m;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n*m);
    k=0;
    int seat[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            seat[i][j]=a[k];
            k++;
        }
    }
    map<int,vector<int>> v;
    for(i=n-1;i>=0;i--){
        for(j=m-1;j>=0;j--){
            v[seat[i][j]].push_back(i);
        }
    }
    int inc=0;
    vector<int> vec[n];
    for(i=0;i<n*m;i++){
        int row=v[b[i]].back();
        v[b[i]].pop_back();
        vec[row].push_back(b[i]);
        vector<int> z=vec[row];
        sort(z.begin(),z.end());
        k=lower_bound(z.begin(),z.end(),b[i])-z.begin();
        inc+=k;
        //cout<<k<<" ";
    }
    cout<<inc;
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