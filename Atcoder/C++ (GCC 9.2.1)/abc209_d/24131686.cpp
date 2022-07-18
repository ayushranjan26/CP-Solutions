#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//

void solve(){
    int i,j,k,n,x;
    cin>>n>>x;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(i%2==1){
            a[i]--;
        }
        x-=a[i];
    }
    if(x>=0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
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
