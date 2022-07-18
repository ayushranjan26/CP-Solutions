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
    int a[n];
    deque<int> q;
    for(i=0;i<n;i++){
        cin>>k;
        if(q.empty()){
            q.push_back(k);
        }
        else{
            if(k<(q.front())){
                //cout<<k<<" "<<q.front()<<"\n";
                q.push_front(k);
            }
            else{
                q.push_back(k);
            }
        }
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop_front();
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