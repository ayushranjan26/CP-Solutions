#include <bits/stdc++.h>

/*#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second*/

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//

void solve(){
    int i,j,n;
    cin>>n;
    int a[n];
    vector<int> vo,ve;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            ve.push_back(a[i]);
        }
        else{
            vo.push_back(a[i]);
        }
    }
    for(i=0;i<ve.size();i++){
        cout<<ve[i]<<" ";
    }
    for(i=0;i<vo.size();i++){
        cout<<vo[i]<<" ";
    }
    return;
}

int main(){
   // IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
