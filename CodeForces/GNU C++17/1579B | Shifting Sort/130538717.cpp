#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod= 998244353;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    vector<int> l,r,o;
    for(i=0;i<n;i++){
        if(b[i]==a[i]){
            continue;
        }
        k=n;
        for(j=n-1;j>=0;j--){
            if(a[j]==b[i]){
                k=j;
                break;
            }
        }
        l.push_back(i);
        r.push_back(k);
        o.push_back(1);
        for(j=k-1;j>=i;j--){
            swap(a[j],a[j+1]);
        }
        /*for(j=0;j<n;j++){
            cout<<a[j]<<" ";
        }
        cout<<"\n";*/
    }
    cout<<l.size()<<"\n";
    for(i=0;i<l.size();i++){
        cout<<l[i]+1<<" "<<r[i]+1<<" "<<r[i]-l[i]<<"\n";
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