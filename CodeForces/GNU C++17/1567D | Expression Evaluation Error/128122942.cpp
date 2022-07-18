#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
 
void solve(){
    int i,j,k,n,sum,sz;
    cin>>sum>>n;
    string ss=to_string(sum);
    multiset<int> s;
    sz=ss.size();
    for(i=0;i<sz;i++){
        int d=(int)(ss[i]-'0');
        for(j=0;j<d;j++){
            int e=1;
            for(k=0;k<sz-i-1;k++){
                e=e*10;
            }
            s.insert(e);
        }
    }
    if(s.size()>n){
       while(s.size()>n){
            int d,e;
            d=*s.begin();
            s.erase(s.begin());
            e=*s.begin();
            s.erase(s.begin());
            s.insert(d+e);
        }
    }
    k=-1;
    while(s.size()<n){
        auto it=upper_bound(s.begin(),s.end(),9);
        int d=*it;
        k=d;
        s.erase(it);
        for(i=0;i<10;i++){
            s.insert(d/10);
        }
    }
    if(k!=-1){
        int c=0;
        while(s.size()>=n){
            s.erase(s.find(k/10));
            c++;
        }
        s.insert(c*(k/10));
    }
    vector<int> ans;
    auto it=s.begin();
    while(it!=s.end()){
        ans.push_back(*it);
        it++;
    }
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