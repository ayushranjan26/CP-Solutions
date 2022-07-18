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

//ll const INF =1e18;
//ll M =1000000007;

void solve()
{
    ll i,j,k,n,m,d,x,y;
    cin>>n>>m;
    cin>>x>>y;
    string s;
    ll ans[n]={0};

    for(i=0;i<n;i++){
        cin>>s;
        ll f=0,p=0;
        for(j=0;j<m;j++){
            if(s[j]=='P'){
                p++;
            }
            if(s[j]=='F'){
                f++;
            }
        }
        if(f>=x){
            ans[i]=1;
        }
        if(f==x-1&&p>=y){
            ans[i]=1;
        }
    }

    for(i=0;i<n;i++){
        cout<<ans[i];
    }
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
