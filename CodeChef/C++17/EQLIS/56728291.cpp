#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,k,n;
    cin>>n;
    if(n==2){
        cout<<"NO";
    }
    else if(n%2){
        cout<<"YES\n";
        int d=(n+1)/2;
        for(i=d;i<=n;i++){
            cout<<i<<" ";
        }
        for(i=d-1;i>=1;i--){
            cout<<i<<" ";
        }
    }
    else{
        cout<<"YES\n";
        deque<int> q;
        q.push_back(3);
        q.push_back(1);
        q.push_back(4);
        q.push_back(2);
        i=5;
        while(q.size()<n){
            q.push_back(i);
            q.push_front(i+1);
            i+=2;
        }
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop_front();
        }
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

