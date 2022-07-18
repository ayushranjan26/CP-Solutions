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
    int i,j,k,n,m;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++){
        cin>>c[i];
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());
    int ans=0;
    i=0,j=0,k=0;
    while(i<n&&j<n&&k<n){
        while(j<n){
            if(b[j]<c[k]){
                while(i<n){
                    if(a[i]<b[j]){
                        ans++;
                        i++;
                        //cout<<a[i]<<" "<<b[j]<<" "<<c[k]<<endl;
                        break;
                    }
                    i++;
                }
                j++;
                break;
            }
            j++;
        }
        k++;
    }
    cout<<ans;
    return;
}

int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}
