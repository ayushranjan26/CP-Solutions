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
    ll i,j,k,n;
    cin>>n;
    ll c[n];
    for(i=0;i<n;i++){
        cin>>c[i];
    }
    vector<ll> ans;
    ll ce=n;
    ll co=n;
    ll sum=0;
    ll mine=c[0];
    ll mino=c[1];
    ans.push_back(mine*ce+mino*co);
    sum=c[0]+c[1];
    ce--;
    co--;
    for(i=2;i<n;i++){
        if(i%2==0){
            mine=min(mine,c[i]);
            ans.push_back(sum+mine*ce+co*mino);
            sum+=c[i];
            ce--;
        }
        else{
            mino=min(mino,c[i]);
            ans.push_back(sum+mine*ce+co*mino);
            sum+=c[i];
            co--;
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans[0];
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
        cout<<"\n";
    }
    return 0;
}