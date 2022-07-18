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
    int i,j,k,l,n,d,h;
    cin>>n>>d>>h;
    if(n<d||h>d||2*h<d){
        cout<<"-1";
        return;
    }
    if(h==d&&h==1&&n>2){
        cout<<"-1";
        return;
    }
    vector<int> v[n+1];
    for(i=2;i<h+2;i++){
        v[i-1].push_back(i);
    }
    for(i=0;i<d-h;i++){
        if(i==0){
            v[1].push_back(h+2+i);
        }
        else{
            v[h+2+i-1].push_back(h+2+i);
        }
    }
    for(i=0;i<n-1-d;i++){
        if(h==d){
            v[2].push_back(2+d+i);
        }
        else{
            v[1].push_back(2+d+i);
        }
    }
    for(i=0;i<n+1;i++){
        for(j=0;j<v[i].size();j++){
            cout<<i<<" "<<v[i][j]<<endl;
        }
    }
    return;
}
 
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}