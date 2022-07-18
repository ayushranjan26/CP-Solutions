#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,k,n,m;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            int hl=0,vl=0,dl=0,dl2=0;
            for(k=0;k<6;k++){
                if(i+k<n&&s[i+k][j]=='#'){
                    hl++;
                }
                if(j+k<n&&s[i][j+k]=='#'){
                    vl++;
                }
                if(i+k<n&&j+k<n&&s[i+k][j+k]=='#'){
                    dl++;
                }
                if(i+k<n&&j+5-k>=0&&j+5-k<n&&s[i+k][j+5-k]=='#'){
                    dl2++;
                }
            }
            if(vl>=4||hl>=4){
                cout<<"Yes";
                //  cout<<dl2<<" ";
                return;
            }
            if(dl>=4&&i+5<n&&j+5<n){
                cout<<"Yes";
                return;
            }
            if(dl2>=4&&i+5<n&&j+5<n){
                cout<<"Yes";
                return;
            }
        }
    }
    cout<<"No";
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
