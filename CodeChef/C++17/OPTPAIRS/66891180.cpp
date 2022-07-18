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
    /*int cnt=0;
    int res=1e9;
    for(i=1;i<n;i++){
        int d=__gcd(i,n-i)+(i*(n-i))/__gcd(i,n-i);
        res=min(d,res);
        //cout<<i<<" "<<n-i<<" -->"<<d<<" "<<endl;
        if(d==n){
            cnt++;
        }
    }
    cout<<res<<endl<<cnt<<endl;
    res=2;*/
    set<int> st;
    st.insert(1);
    st.insert(n-1);
    for(i=2;i*i<=n;i++){
        if(n%i==0){/// (i,n-i) (n-i,i) (n/i,n-n/i) ,(n-n/i,n/i)
            st.insert(i);
            st.insert(n-i);
            st.insert(n/i);
            st.insert(n-n/i);
        }
    }
    cout<<st.size();
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
