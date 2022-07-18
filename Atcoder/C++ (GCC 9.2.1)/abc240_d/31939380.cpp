#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

void solve(){
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> v;
    vector<int> till;
    v.push_back(a[0]);
    till.push_back(1);
    cout<<till.size()<<endl;
    for(i=1;i<n;i++){
        if(v.size()>0&&a[i]==v.back()){
            v.push_back(a[i]);
            till.push_back(till.back()+1);
        }
        else{
            v.push_back(a[i]);
            till.push_back(1);
        }
        if(till.back()==a[i]){
            for(j=0;j<a[i];j++){
                till.pop_back();
                v.pop_back();
            }
        }
        cout<<till.size()<<endl;
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
        cout<<"\n";
        tc++;
    }
    return 0;
}
