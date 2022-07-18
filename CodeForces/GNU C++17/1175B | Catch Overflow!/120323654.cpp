#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
const long long INF = 1ll << 32;
ll M =1000000007;
 
void solve()
{
    ll i,j,k,l,n,m;
    string s;
    cin>>l;
    n=0;
    stack<ll> st;
    st.push(1);
    bool ok=true;
    while(l--){
        cin>>s;
        if(s=="for"){
            cin>>m;
            st.push(min(st.top()*m,INF));
        }
        else if(s=="end"){
            st.pop();
        }
        else{
            n+=st.top();
        }
    }
    if(n<INF){
        cout<<n;
    }
    else{
        cout<<"OVERFLOW!!!";
    }
    return;
}
 
int main(){
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
 