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
    int a[m],b[m];
    for(i=0;i<m;i++){
        cin>>a[i];
        b[i]=1;
    }
    sort(a,a+m);
    if(n==1){
        cout<<0;
        return;
    }
    if(n==2){
        cout<<a[0];
        return;
    }
    if(n==3){
        cout<<a[0]+a[1];
        return;
    }

    set<int> st;
    st.insert(0);
    i=1;
    while(i<m){
        st.insert(i);
        i+=(int)(st.size());
    }
    n-=st.size();
    for(i=m-1;i>=0;i--){
        if(st.find(i)==st.end()&&n>1){
            st.insert(i);
            n--;
        }
    }
    int res=0;
    auto it=st.begin();
    while(it!=st.end()){
        res+=a[*it];
        it++;
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
