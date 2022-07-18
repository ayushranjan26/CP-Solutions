#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

vector<int> v[25];
int n;
int res=0;

void cal(int idx,int x){
    if(idx==n){
        if(x==1){
            res++;
        }
        return ;
    }
    else{
        int i;
        for(i=0;i<v[idx].size();i++){
            if(x%v[idx][i]==0){
                cal(idx+1,x/v[idx][i]);
            }
        }
    }
}

void solve(){
    int i,j,x;
    cin>>n>>x;
    for(i=0;i<n;i++){
        int sz;
        cin>>sz;
        for(j=0;j<sz;j++){
            int d;
            cin>>d;
            v[i].push_back(d);
        }
    }
    cal(0,x);
    cout<<res;
    return;
}

int32_t main(){
    IOS;
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
