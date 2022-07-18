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
    int i,j,n;
    cin>>n;
    vector<pii> a(n);
    for(i=0;i<n;i++){
        cin>>a[i].ft;
        a[i].sd=i;
    }
    int pos[n+1];
    pos[0]=0;
    int dis=0;
 
    sort(a.rbegin(),a.rend());
    for(i=0;i<n;i++){
        //cout<<a[i].ft<<" ";
        int d=(i)/2+1;
        dis+=a[i].ft*(2*(d));
        if(i%2==0){
            pos[a[i].sd+1]=d;
        }
        else{
            pos[a[i].sd+1]=-d;
        }
    }
    cout<<dis<<endl;
    for(i=0;i<=n;i++){
        cout<<pos[i]<<" ";
    }
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