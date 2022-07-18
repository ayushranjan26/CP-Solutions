#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e5+6;

set<int> st;
void primeFactors(int n){
    while (n % 2 == 0)
    {
        st.insert(2);
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            st.insert(i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        st.insert(n);
}

void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>k;
        if(k==1)continue;
        primeFactors(k);
    }
    int v[m+1]={0};
    while(!st.empty()){
        k=*st.begin();
        st.erase(st.begin());
        i=k;
        while(i<=m){
            v[i]=1;
            i+=k;
        }
    }
    vector<int> ans;
    for(i=1;i<=m;i++){
        if(v[i]==0){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<"\n";
    for(i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
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
