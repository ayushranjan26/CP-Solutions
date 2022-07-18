#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,m;
    cin>>n>>m;
    int a[n],b[n];
    multiset<int> st;
    map<int,vector<int> > mp;
    int mx=m;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        mx=min(mx,b[i]);
        st.insert(a[i]);
        mp[a[i]].push_back(b[i]);
    }


    int res[m+5]={0};
    for(i=1;i<=mx;i++){
        //cout<<i<<" ";
        if(st.empty()){
        continue;
        }
        auto it=st.end();
        it--;
        int d=*it;
        res[d-i+1]+=1;
        res[d-i+1+m-d+1]--;
        //cout<<d-i+1<<" "<<d-i+1+m-d+1<<endl;
        while(!st.empty()){
            if((*st.begin())==i){
                //cout<<(*st.begin())<<" -  ";
                st.erase(st.begin());
                if(mp[i].size()==0){
                    break;
                }
                st.insert(mp[i].back());
                mp[i].pop_back();
            }
            else{
                break;
            }
        }
        //cout<<"F\n";
    }
    for(i=1;i<=m;i++){
        res[i]+=res[i-1];
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
        //cout<<"\n";
        tc++;
    }
    return 0;
}
