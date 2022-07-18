#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n;
    cin>>n;
    n=n*2;
    int a[n];
    vector<int> en,od;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            en.push_back(a[i]);
        }
        else{
            od.push_back(a[i]);
        }
    }
    if(od.size()>=en.size()){
        cout<<(od.size()-en.size())/2;
        return;
    }
    vector<int> v;
    for(i=0;i<en.size();i++){
        int cnt=0;
        while(en[i]%2==0){
            en[i]/=2;
            cnt++;
        }
        v.push_back(cnt);
    }
    sort(v.begin(),v.end());
    int res=0;
    for(i=0;i<(en.size()-od.size())/2;i++){
        res+=v[i];
    }
    cout<<res;
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
