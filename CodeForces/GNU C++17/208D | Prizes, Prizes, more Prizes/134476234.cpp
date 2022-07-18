 #include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
 
    vector<pii> v(5);
    for(i=0;i<5;i++){
        cin>>v[i].ft;
        v[i].sd=i;
    }
    sort(v.rbegin(),v.rend());
    int ans[5]={0},rem=0;
    for(i=0;i<n;i++){
        rem+=a[i];
        for(j=0;j<5;j++){
            ans[v[j].sd]+=rem/v[j].ft;
            rem=rem%v[j].ft;
        }
    }
    for(i=0;i<5;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n"<<rem;
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