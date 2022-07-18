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
    int i,j,n,m;
    char c;
    string a,b;
    cin>>c>>a>>b;
    char rnk[9]={'6','7','8','9','T','J','Q','K','A'};
    if(a[1]==b[1]){
        int ranka=0,rankb=0;
        for(i=0;i<9;i++){
            if(a[0]==rnk[i]){
                ranka=i;
            }
        }
        for(i=0;i<9;i++){
            if(b[0]==rnk[i]){
                rankb=i;
            }
        }
        if(ranka>rankb){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else if(a[1]==c){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        //cout<<endl;
        cout<<endl;
        tc++;
    }
    return 0;
}