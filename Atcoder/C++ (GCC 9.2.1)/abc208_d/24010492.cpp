#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//

void solve()
{
    ll i,j,k,p;
    cin>>p;
    ll a[10];
    a[0]=1;
    for(i=1;i<10;i++){
        a[i]=(i+1)*a[i-1];
    }
    int ans=0;
    for(i=9;i>=0;i--){
        if(p%a[i]==0){
            ans+=p/a[i];
            break;
        }
        else{
            ans+=p/a[i];
            p=p%a[i];
        }
    }
    cout<<ans;
    return;
}

int main(){
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}

