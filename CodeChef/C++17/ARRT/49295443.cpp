#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;

void solve(){
    int i,j,k,n,d;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        a[i]%=n;
    }
    for(i=0;i<n;i++){
        cin>>b[i];
        b[i]%=n;
    }
    int mn=1e8;
    for(i=0;i<n;i++){
        mn=min(mn,(a[0]+b[i])%n);
    }
    vector<int> idx;
    for(i=0;i<n;i++){
        if(mn==(a[0]+b[i])%n){
            idx.push_back(i);
        }
    }
    int winner=idx[0];
    if(idx.size()==2){
    for(i=0;i<n;i++){
        j=(idx[0]+i)%n;
        k=(idx[1]+i)%n;
        if((a[i]+b[j])%n<(a[i]+b[k])%n){
            winner=idx[0];
            break;
        }
        if((a[i]+b[j])%n>(a[i]+b[k])%n){
            winner=idx[1];
            break;
        }
    }
    }
    for(i=0;i<n;i++){
        j=(winner+i)%n;
        cout<<(a[i]+b[j])%n<<" ";
    }
    return;
}

int main(){
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


