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
    int i,j,k;
    cin>>k;
    vector<int> v1,v2,v3;
    for(i=0;i<k;i++){
        int d;
        cin>>d;
        if(d<10){
            v1.push_back(d);
        }
        if(d<100&&d>=10){
            v2.push_back(d);
        }
        if(d==100){
            v3.push_back(d);
        }
    }
    vector<int> res;
 
    if(v3.size()>0){
        res.push_back(100);
    }
    sort(v1.begin(),v1.end());
    for(i=0;i<v1.size();i++){
        res.push_back(v1[i]);
        if(v1[i]==0){
            continue;
        }
        else{
            break;
        }
    }
    if(v1.size()==0&&v2.size()>0){
        res.push_back(v2[0]);
    }
    else if(v1.size()==1&&v1[0]==0&&v2.size()>0){
        res.push_back(v2[0]);
    }
    else{
        for(i=0;i<v2.size();i++){
            if(v2[i]%10==0){
                res.push_back(v2[i]);
                break;
            }
        }
    }
    cout<<res.size()<<endl;
    for(i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}