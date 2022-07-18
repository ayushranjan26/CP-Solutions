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
    string s,t;
    cin>>s;
    t=s;
    sort(t.begin(),t.end());
    vector<vector<int>> v;
 
    for(j=0;j<n;j++){
        int cnt=0;
        for(i=0;i<n;i++){
            if(s[i]==t[i]){
                cnt++;
            }
        }
        if(cnt==n){
            break;
        }
        int pre[n]={0},suf[n]={0};
        if(s[0]=='1'){
            pre[0]=1;
        }
        if(s[n-1]=='0'){
            suf[n-1]=1;
        }
        for(i=1;i<n;i++){
            pre[i]=pre[i-1];
            if(s[i]=='1'){
                pre[i]++;
            }
        }
        for(i=n-2;i>=0;i--){
            suf[i]=suf[i+1];
            if(s[i]=='0'){
                suf[i]++;
            }
        }
        int idx=0,mx=0;
        for(i=n-1;i>=0;i--){
            if(mx<min(suf[i],pre[i])){
                idx=i;
                mx=min(pre[i],suf[i]);
            }
        }
        vector<int> k;
        for(i=0;i<idx;i++){
            if(s[i]=='1'){
                k.push_back(i);
            }
        }
        k.push_back(idx);
        for(i=idx+1;i<=n;i++){
            if(s[i]=='0'){
                k.push_back(i);
            }
        }
        v.push_back(k);
        for(i=0;i<k.size()/2;i++){
            swap(s[k[i]],s[k[k.size()-1-i]]);
            //cout<<s<<"\n";
        }
        //cout<<s<<" "<<idx<<endl;
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++){
        cout<<v[i].size()<<" ";
        for(j=0;j<v[i].size();j++){
            cout<<v[i][j]+1<<" ";
        }
        cout<<endl;
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