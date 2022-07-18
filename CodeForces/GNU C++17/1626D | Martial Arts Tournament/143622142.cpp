#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
vector<int> pow2;
 
void solve(){
    int i,j,n,k;
    cin>>n;
    int a[n];
    map<int,int> mp;
    for(i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<int> pre;
    pre.push_back(0);
    for(auto it:mp){
        pre.push_back(it.sd);
    }
    for(i=1;i<pre.size();i++){
        pre[i]+=pre[i-1];
    }
 
 
    int res=1e13,N=20;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            for(k=0;k<N;k++){
                int i1=0,i2=0,i3=0,cost=0;
                i1=upper_bound(pre.begin(),pre.end(),pow2[i])-pre.begin();
                i1--;
                if(i1==0){
                    cost++;
                }
                else{
                    cost+=pow2[i]-pre[i1];
                }
 
                i2=upper_bound(pre.begin(),pre.end(),pre[i1]+pow2[j])-pre.begin();
                i2--;
                if(i1==i2){
                    cost++;
                }
                else{
                    cost+=pow2[j]-(pre[i2]-pre[i1]);
                }
 
                i3=upper_bound(pre.begin(),pre.end(),pre[i2]+pow2[k])-pre.begin();
                i3--;
                if(i3==i2){
                    cost++;
                }
                else{
                    cost+=pow2[k]-(pre[i3]-pre[i2]);
                }
               // cout<<pow2[i]<<" "<<pow2[j]<<" "<<pow2[k]<<endl;
                //cout<<i1<<" "<<i2<<" "<<i3<<endl;
                //cout<<cost<<endl<<endl;
                if(i3==pre.size()-1){
                    res=min(res,cost);
                }
            }
        }
    }
    cout<<res;
    return;
}
 
int32_t main(){
    IOS;
    int t,tc=1;
    t=1;
 
    int k=1;
    for(int i=0;i<32;i++){
        pow2.push_back(k);
        k=k*2;
    }
 
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
 