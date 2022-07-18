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
    cin>>n;
    int a[n],sum=0;
    bool ok=false;
    vector<int> v1,v2,v3;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]==0){
            ok=true;
        }
        if(a[i]%3==1){
            v1.push_back(a[i]);
        }
        if(a[i]%3==2){
            v2.push_back(a[i]);
        }
        if(a[i]%3==0){
            v3.push_back(a[i]);
        }
    }
    sort(v2.begin(),v2.end());
    sort(v1.begin(),v1.end());
    sort(a,a+n);
    if(!ok){
        cout<<"-1";
    }
    else if(sum%3==0){
        if(a[n-1]==0){
            cout<<"0";
            return;
        }
        for(i=n-1;i>=0;i--){
            cout<<a[i];
        }
    }
    else if(sum%3==1){
        if(v1.size()>0){
            vector<int> ans;
            for(i=1;i<v1.size();i++){
                ans.push_back(v1[i]);
            }
            for(i=0;i<v2.size();i++){
                ans.push_back(v2[i]);
            }
            for(i=0;i<v3.size();i++){
                ans.push_back(v3[i]);
            }
            sort(ans.rbegin(),ans.rend());
            if(ans[0]==0){
                cout<<"0";
                return;
            }
            for(i=0;i<ans.size();i++){
                cout<<ans[i];
            }
        }
        else if(v2.size()>1){
            vector<int> ans;
            for(i=0;i<v1.size();i++){
                ans.push_back(v1[i]);
            }
            for(i=2;i<v2.size();i++){
                ans.push_back(v2[i]);
            }
            for(i=0;i<v3.size();i++){
                ans.push_back(v3[i]);
            }
            sort(ans.rbegin(),ans.rend());
            if(ans[0]==0){
                cout<<"0";
                return;
            }
            for(i=0;i<ans.size();i++){
                cout<<ans[i];
            }
        }
        else{
            cout<<"-1";
        }
    }
    else{
        if(v2.size()>0){
            vector<int> ans;
            for(i=0;i<v1.size();i++){
                ans.push_back(v1[i]);
            }
            for(i=1;i<v2.size();i++){
                ans.push_back(v2[i]);
            }
            for(i=0;i<v3.size();i++){
                ans.push_back(v3[i]);
            }
            sort(ans.rbegin(),ans.rend());
            if(ans[0]==0){
                cout<<"0";
                return;
            }
            for(i=0;i<ans.size();i++){
                cout<<ans[i];
            }
        }
        else if(v1.size()>1){
            vector<int> ans;
            for(i=2;i<v1.size();i++){
                ans.push_back(v1[i]);
            }
            for(i=0;i<v2.size();i++){
                ans.push_back(v2[i]);
            }
            for(i=0;i<v3.size();i++){
                ans.push_back(v3[i]);
            }
            sort(ans.rbegin(),ans.rend());
            if(ans[0]==0){
                cout<<"0";
                return;
            }
            for(i=0;i<ans.size();i++){
                cout<<ans[i];
            }
        }
        else{
            cout<<"-1";
        }
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}