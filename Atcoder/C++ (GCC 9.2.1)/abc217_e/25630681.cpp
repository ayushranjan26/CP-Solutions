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
    multiset<int> s;
    deque<int> dq;
    while(q--){
        cin>>x;
        if(x==1){
            cin>>x;
            dq.push_back(x);
        }
        else if(x==2){
            if(!s.empty()){
                x=*s.begin();
                cout<<x<<endl;
                s.erase(s.begin());
            }
            else{
                cout<<dq.front()<<endl;
                dq.pop_front();
            }
        }
        else{
            while(!dq.empty()){
                s.insert(dq.front());
                dq.pop_front();
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
