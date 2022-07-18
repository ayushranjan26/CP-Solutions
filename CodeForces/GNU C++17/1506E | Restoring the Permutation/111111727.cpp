/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define rloop(i,a,b) for(int i=(a);i>(b);i--)
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
 
 
void solve()
{
    ll i,j,k,n,d;
    cin>>n;
    ll q[n];
    set<ll> st,st2;
    ll a1[n]={0};
    ll a2[n]={0};
 
    for(i=1;i<=n;i++){
        st.insert(i);
        st2.insert(i);
    }
 
    for(i=0;i<n;i++){
        cin>>q[i];
        st.erase(q[i]);
        st2.erase(q[i]);
    }
 
    a1[0]=q[0];
    a2[0]=q[0];
 
    for(i=1;i<n;i++){
        if(q[i]!=q[i-1]){
            a1[i]=q[i];
            a2[i]=q[i];
        }
    }
 
    for(i=0;i<n;i++){
        if(a1[i]==0){
            auto it=st.begin();
            a1[i]=*it;
            st.erase(*it);
        }
    }
 
    for(i=0;i<n;i++){
        if(a2[i]==0){
            auto it=st2.upper_bound(q[i]);
            it--;
            a2[i]=*it;
            st2.erase(*it);
        }
    }
 
    for(i=0;i<n;i++){
        cout<<a1[i]<<" ";
    }
    cout<<"\n";
    for(i=0;i<n;i++){
        cout<<a2[i]<<" ";
    }
    return ;
}
 
int main()
{
    //IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}