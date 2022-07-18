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
    int i,j,k,n,m;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<n;i++){
        string ss;
        cin>>ss;
        for(j=0;j<m;j++){
            a[i][j]=ss[j];
        }
    }
    int f=1;
    int z=0;
    char c='W',d='R';
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]!='.'){
                f=0;
                z=(i+j)%2;
                c=a[i][j];
                break;
            }
        }
    }
    if(c=='R'){
        d='W';
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if((i+j)%2==z){
                if(a[i][j]==c||a[i][j]=='.'){
                    a[i][j]=c;
                }
                else{
                    cout<<"NO\n";
                    return;
                }
            }
            else{
                if(a[i][j]==d||a[i][j]=='.'){
                    a[i][j]=d;
                }
                else{
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    cout<<"YES\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return;
}
 
int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}