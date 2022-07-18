#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
 
void solve(){
    ll i,j,m,n;
    cin>>n;
    vector<ll> v(n);
    set<int> s;
    for(i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
 
    for(i=0;i<v.size();i++){
        for(j=0;j<v.size();j++){
            if(v[i]!=v[j]){
                if(s.find(abs(v[i]-v[j]))==s.end()){
                    v.push_back(abs(v[i]-v[j]));
                    s.insert(abs(v[i]-v[j]));
                    if(v.size()>300){
                        cout<<"NO";
                        return;
                    }
                }
            }
        }
    }
    cout<<"YES\n";
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return;
}
 
int main(){
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}