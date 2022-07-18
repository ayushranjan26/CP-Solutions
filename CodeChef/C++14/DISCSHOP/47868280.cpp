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
    string s=to_string(n);
    int ans=n;
    for(i=0;i<s.size();i++){
        string s2="";
        for(j=0;j<s.size();j++){
            if(j!=i){
                s2+=s[j];
            }
        }
        k=stoi(s2);
        //cout<<s2<<" ";
        ans=min(ans,k);
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
