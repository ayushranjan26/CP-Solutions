#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
ll mod=1e9+7;
 
void solve(){
    int i,j,k,n,d1,d2;
    cin>>n;
    vector<pair<int,int>> vp;
    for(i=0;i<n;i++){
        cin>>d1;
        vp.push_back({d1,i});
    }
    sort(vp.begin(),vp.end());
    map<int,int> mp,mp2;
    for(i=0;i<n;i++){
        d1=vp[i].ft;
        d2=vp[i].sd;
        if(d2%2==0){
            mp[d1]++;
        }
        else{
            mp[d1]--;
        }
        if(i%2==0){
            mp2[d1]++;
        }
        else{
            mp2[d1]--;
        }
    }
    for(auto it:mp){
        if(mp[it.ft]!=mp2[it.ft]){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}
/*
1
6
2 1 2 1 2 1
*/