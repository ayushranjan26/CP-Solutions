#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
int a[11],n;
bool rec(int idx,int sum,int cnt){
    if(idx==n){
        if(sum==0&&cnt){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return rec(idx+1,sum+a[idx],cnt+1)|rec(idx+1,sum-a[idx],cnt+1)|rec(idx+1,sum,cnt);
    }
}
void solve(){
    int i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(rec(0,0,0)){
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
        cout<<endl;
        tc++;
    }
    return 0;
}
 