#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
int mod=1e9+7;
const int N=200005;
 
void solve(){
    int i,j,k,n;
    cin>>n>>k;
    int a[n],b[n];
    map<int,int> mp;
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
        mp[b[i]]=i;
    }
    sort(a,a+n);
    int c1=0;
    for(i=0;i<n-1;i++){
        int it=mp[a[i]];
        if(it==n-1||b[it+1]!=a[i+1]){
            c1++;
        }
    }
    if(c1<=k-1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return;
}
 
int main(){
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