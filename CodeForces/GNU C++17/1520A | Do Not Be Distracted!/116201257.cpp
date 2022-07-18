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
ll M =1000000007;
 
void solve()
{
    ll i,j,k,n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    st.insert(s[0]);
    for(i=1;i<n;i++){
        if(st.find(s[i])==st.end()){
            st.insert(s[i]);
        }
        else if(st.find(s[i])!=st.end()&&s[i]==s[i-1]){
            st.insert(s[i]);
        }
        else{
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return;
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