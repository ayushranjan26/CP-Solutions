#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,k,n,c;
    cin>>n>>c;
    int cnt=0;
    vector<int> v;
    v.push_back(c);
    for(i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n+1;i++){
        if(v[i]==c){
            j=i;
        }
    }
    for(i=j+1;i<n+1;i++){
        if(abs(v[i]-v[j])%2){
            cnt++;
        }
        else{
            break;
        }
    }
    for(i=j-1;i>=0;i--){
        if(abs(v[i]-v[j])%2){
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt<<" ";
    if(cnt==n){
        cout<<1;
    }
    else{
        cout<<-1;
    }
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
