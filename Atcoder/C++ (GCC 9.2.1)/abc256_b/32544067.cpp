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
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int p=0;
    int sq[4]={0};
    for(i=0;i<n;i++){
        sq[0]++;
        for(j=3;j>=0;j--){
            if(a[i]+j<4){
                sq[a[i]+j]+=sq[j];
                sq[j]=0;
            }
            else{
                p+=sq[j];
                sq[j]=0;
            }
        }
    }
    cout<<p;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
