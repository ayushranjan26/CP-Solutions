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
    string s;
    cin>>s;
    n=s.size();
    ll lst[150]={0};
    for(i=0;i<150;i++){
        lst[i]=n;
    }
    for(i=0;i<n;i++){
        lst[s[i]]=i;
    }
    ll pos=0;
    for(i=0;i<=26;i++){
        char mx=0;
        for(j=pos;j<n;j++){
            mx=max(mx,s[j]);
            if(lst[s[j]]==j){
                cout<<mx;
                lst[mx]=n;
                while(s[pos]!=mx){
                    pos++;
                }
                pos++;
                for(k=0;k<n;k++){
                    if(s[k]==mx){
                        s[k]=0;
                    }
                }
                break;
            }
        }
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