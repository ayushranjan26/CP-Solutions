#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;
int k,n;
bool chk(vector<int> &v,int idx){
    int cnt_l=0,cnt_r=0;
    int need_l=n/2,need_r=n-n/2-1;
    int cost=0;

    cnt_l=idx,cnt_r=n*n-idx-1;
    int cnt=1;
    //vector<int> d;
    for(int i=idx;i<n*n;i++){
        if((cnt_l)>=cnt*need_l&&(cnt_r-(n-cnt))>=cnt*need_r){
            cost+=v[i];
            cnt_r--;
            //d.push_back(v[i]);
            cnt++;
        }
        else{
            cnt_l++;
            cnt_r--;
        }
        //cout<<v[i]<<" "<<cnt<<" "<<cnt_r<<endl;
        if(cnt>n){
            break;
        }
    }
    //for(int i=0;i<d.size();i++){
        //cout<<d[i]<<" ";
    //}
    //cout<<endl;
    //cout<<endl;
    if(cnt!=n+1||cost>k){
        return false;
    }
    return true;
}

void solve(){
    int i,j;
    cin>>n>>k;
    vector<int> v(n*n);
    for(i=0;i<n*n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sm=0,mid=n/2,c1=0;
    for(i=n/2;i<n*n;i+=mid+1){
        if(c1==n){
            break;
        }
        c1++;
        sm+=v[i];
    }
    if(sm>k){
        cout<<"-1";
        return ;
    }
    int ans=v[mid],lo=0,hi=n*n-1;
    while(lo<=hi){
        int m=(lo+hi)/2;
        if(chk(v,m)){
            //cout<<m<<" ";
            ans=max(ans,v[m]);
            lo=m+1;
        }
        else{
            hi=m-1;
        }
    }
    cout<<ans;
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
