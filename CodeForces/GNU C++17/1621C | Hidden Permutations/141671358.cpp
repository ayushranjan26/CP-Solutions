#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
int ask(int i){
    cout<<"? "<<i<<endl;
    cin>>i;
    return i;
}
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int res[n+1]={0};
    for(i=1;i<=n;i++){
        if(res[i]==0){
            while(ask(i)!=i){
 
            }
            int q=i;
            while(1){
                int temp;
                temp=ask(i);
                res[q]=temp;
                q=temp;
                /*for(j=1;j<=n;j++){
                    cout<<res[j]<<" ";
                }
                cout<<endl;*/
                if(q==i){
                    break;
                }
            }
        }
    }
    cout<<"! ";
    for(i=1;i<=n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}