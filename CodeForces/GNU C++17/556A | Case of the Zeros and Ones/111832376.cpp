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
    ll i,j,x,y,k,n,m;
    cin>>n;
    string s;
    cin>>s;
    stack<char> st;
    for(i=0;i<n;i++){
        if(st.empty()||st.top()==s[i]){
            st.push(s[i]);
        }
        else{
            st.pop();
        }
    }
    cout<<st.size();
    return ;
}
 
int main()
{
    //IOS;
    ll t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}