/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
void solve(){
    int n,t;
    cin>>n>>t;
    vector<pair<int,int> > a(n);
    for(int i1=0;i1<n;i1++){
        cin>>a[i1].first;
        a[i1].second=i1;
    }
    sort(a.begin(),a.end());
    int ans[n]={0};
    int c=0;
    for(int i1=0;i1<n;i1++){
       // cout<<a[i1].first<<" "<<a[i1].second;
        if(a[i1].first<=t/2){
           // cout<<" 1\n";
            ans[a[i1].second]=1;
           // cout<<ans[a[i1].second]<<endl;
        }
        if(a[i1].first==t/2&&t%2==0){
            c++;
        }
    }
    int c1=0;
    for(int i1=0;i1<n;i1++){
        if(c1>=c/2&&a[i1].first==t/2&&t%2==0){
            ans[a[i1].second]=0;
            continue;
        }
        if(a[i1].first==t/2&&t%2==0){
            ans[a[i1].second]=1;
            c1++;
        }
    }
    for(int i1=0;i1<n;i1++){
        cout<<ans[i1]<<" ";
    }
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}