#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,x;
    cin>>n>>x;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    multiset<int> st;
    j=n-1;
    for(i=n-1;i>=0;i--){
        if(a[i]==b[j]){
            j--;
            if(!st.empty()){
                auto it=st.end();
                it--;
                //cout<<a[i]<<" "<<*it<<endl;
                if(a[i]+*it>x){
                    cout<<"NO";
                    return;
                }
                while(j>=0){
                    if(st.find(b[j])!=st.end()){
                        st.erase(st.find(b[j]));
                        j--;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        else{
            st.insert(a[i]);
        }
    }

    cout<<"YES";
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
