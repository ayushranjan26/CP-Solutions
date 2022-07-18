#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;

void solve(){
    int i,j,k,l,q,x;
    cin>>q;
    int N=2e9;
    multiset<pii> s;
    for(i=N;i<N+q;i++){
        cin>>x;
        if(x==1){
            cin>>k;
            s.insert({i,k});
        }
        else if(x==2){
            cout<<s.begin()->sd<<endl;
            s.erase(s.begin());
        }
        else{
            while(s.size()&&s.rbegin()->ft>=N){
                k=s.rbegin()->sd;
                s.erase(--s.end());
                s.insert({k,k});
            }
        }
    }
    return;
}

int32_t main(){
    IOS;
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
