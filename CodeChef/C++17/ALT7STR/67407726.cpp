#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

vector<int> sm(100005);

int x[100005],x2[100005];
void solve(){
    int i,j,n;
    cin>>n;
    n--;
    i=upper_bound(sm.begin(),sm.end(),n)-sm.begin();
    i--;
    int res=(n+1)*x[i]-x2[i];
    res+=mod;
    res%=mod;
    cout<<res;//<<" ";
    //cout<<x[i]<<" "<<x2[i]<<" "<<i<<endl;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1,i;
    for(i=1;i<100005;i++){
        sm[i]=(i*(i+1))/2;
        x[i]=sm[i]+x[i-1];
        x[i]%=mod;
        x2[i]=sm[i]*sm[i]+x2[i-1];
        x2[i]%=mod;
    }

    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
