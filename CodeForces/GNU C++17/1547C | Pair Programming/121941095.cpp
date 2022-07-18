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
    cin>>k>>n>>m;
    int a[n],b[m];
    vector<int> v;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    i=0,j=0;
    while(i<n&&j<m){
        if(a[i]==0||b[j]==0){
            if(a[i]==0){
                v.push_back(0);
                i++;
            }
            else{
                v.push_back(0);
                j++;
            }
            k++;
        }
        else{
            if(a[i]<b[j]){
                if(a[i]>k){
                    cout<<"-1";
                    return;
                }
                v.push_back(a[i]);
                i++;
            }
            else{
                if(b[j]>k){
                    cout<<"-1";
                    return;
                }
                v.push_back(b[j]);
                j++;
            }
        }
    }
    while(i<n){
        if(a[i]==0){
            v.push_back(0);
            i++;
            k++;
        }
        else{
            if(a[i]>k){
                cout<<"-1";
                return;
            }
            v.push_back(a[i]);
            i++;
        }
    }
    while(j<m){
        if(b[j]==0){
            v.push_back(0);
            j++;
            k++;
        }
        else{
            if(b[j]>k){
                cout<<"-1";
                return;
            }
            v.push_back(b[j]);
            j++;
        }
    }
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