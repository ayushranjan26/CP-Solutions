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
    int c=1;
    for(i=0;i<=35;i++){
        vector<pii> vp;
        int prev=0;
        for(j=0;j<n;j++){
            if((a[j]&c)>0){
                vp.push_back({prev,j});
                prev=j+1;
            }
        }
        if(vp.size()>1){
            cout<<"YES\n"<<vp.size()<<endl;
            vp[vp.size()-1].sd=n-1;
            for(int k=0;k<vp.size();k++){
                cout<<vp[k].ft+1<<" "<<vp[k].sd+1<<endl;
            }
            return;
        }
        c*=2;
    }
    cout<<"NO\n";
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        //cout<<"\n";
        tc++;
    }
    return 0;
}
