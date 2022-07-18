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
    if(n==1){
        cout<<"1\n1";
        return;
    }
    int ans[n+1]={0};
    for(i=n;i>=1;i--){
        if(ans[i]==0){
            bool f=false;
            int d=0;
            int x=34359738368;
            while(x>0){
                if((i&x)!=0){
                    f=true;
                }
                else{
                    if(f){
                        d+=x;
                    }
                }
                x=x/2;
            }
            ans[i]=d;
            ans[d]=i;
        }
    }
    set<int> st;
    for(i=1;i<=n;i++){
        if(ans[i]>0&&ans[i]<=n){
            st.insert(ans[i]);
        }
    }
    if(st.size()!=n){
        cout<<"-1";
        return;
    }

    for(i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    return;
}

int32_t main(){
    IOS;
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
