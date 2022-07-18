/*WELCOME TO AYUSH RANJAN CODE*/

#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

ll const INF =1e18;
ll M =1000000007;

void solve()
{
    int i,j,k=0,n;
    cin>>n;
    map<string,int> m0;
    map<string,int> m1;
    set<string> st;
    for(i=0;i<n;i++){
        string s1;
        int d;
        cin>>s1>>d;
        st.insert(s1);
        if(d==0){
            m0[s1]++;
        }
        else{
            m1[s1]++;
        }
    }
    ll ans=0;
    while(!st.empty()){
        string s1;
        s1=*st.begin();
        st.erase(st.begin());
        //cout<<ans<<" ";
        if(m0.find(s1)==m0.end()){
            m0[s1]=0;
        }
        if(m1.find(s1)==m1.end()){
            m1[s1]=0;
        }
        ans+=max(m0[s1],m1[s1]);
    }
    cout<<ans;
    return;
}

int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}
