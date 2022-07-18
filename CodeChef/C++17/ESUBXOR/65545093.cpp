#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n;
    cin>>n;
    int a[n],b[n];
    if(n%2==1){
        a[n-1]=3e5;
        b[n-1]=3e5-1;
    }
    j=2;
    for(i=1;i<n;i+=2){
        while(1){
            int d=j^(j-1);
            if(d==1){
                break;
            }
            j++;
        }
        a[i]=j;
        a[i-1]=j-1;
        j+=2;
    }
    for(i=1;i<n;i+=2){
        while(1){
            int d=j^(j-1);
            if(d==1){
                break;
            }
            j++;
        }
        b[i]=j;
        b[i-1]=j-1;
        j+=2;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
     for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
