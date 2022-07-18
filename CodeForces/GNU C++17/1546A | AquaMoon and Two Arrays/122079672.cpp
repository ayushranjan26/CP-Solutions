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
    int i,j,k,n,m,d1;
    cin>>n;
    int a[n],b[n],sm1=0,sm2=0;
 
    for(i=0;i<n;i++){
        cin>>a[i];
        sm1+=a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
        sm2+=b[i];
    }
    if(sm1!=sm2){
        cout<<"-1";
    }
    else{
        vector<int> vj,vi;
        for(i=0;i<n;i++){
            if(a[i]<b[i]){
                for(j=0;j<b[i]-a[i];j++){
                    vj.push_back(i+1);
                }
            }
            if(a[i]>b[i]){
                for(j=0;j<a[i]-b[i];j++){
                    vi.push_back(i+1);
                }
            }
        }
 
        //cout<<"F";
        cout<<vi.size()<<endl;
        for(i=0;i<vi.size();i++){
            cout<<vi[i]<<" "<<vj[i]<<"\n";
        }
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}