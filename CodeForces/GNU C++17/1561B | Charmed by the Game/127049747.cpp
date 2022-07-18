#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
/*319982OP*/
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e4+1;
const int INF=1e9+3;
 
void solve(){
    int i,j,k,a,b,n;
    cin>>a>>b;
    n=a+b;
    if(a<b){
        swap(a,b);
    }
    vector<int> ans;
    if(n%2==0){
        k=n/2-b;
        while(b>=0){
            ans.push_back(k);
            k+=2;
            b--;
        }
    }
    if(n%2==1){
        k=n/2-b;
        int tmp=b;
        while(b>=0){
            ans.push_back(k);
            k+=2;
            b--;
        }
        b=tmp;
        k=n/2+1-b;
        while(b>=0){
            ans.push_back(k);
            k+=2;
            b--;
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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