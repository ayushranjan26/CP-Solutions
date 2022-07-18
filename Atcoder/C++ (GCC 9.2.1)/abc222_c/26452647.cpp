#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod = 1e7+9;


void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    string a[2*n];
    for(i=0;i<2*n;i++){
        cin>>a[i];
    }
    vector<pair<int,int>> vp;
    for(i=0;i<2*n;i++){
        vp.push_back({0,-i});
    }
    for(j=0;j<m;j++){
        for(i=0;i<2*n;i+=2){
            char c1,c2;
            c1=a[-vp[i].sd][j];
            c2=a[-vp[i+1].sd][j];
            if(c1!=c2){
                if(c1=='G'&&c2=='C'){
                    vp[i].ft++;
                }
                else if(c1=='C'&&c2=='P'){
                    vp[i].ft++;
                }
                else if(c1=='P'&&c2=='G'){
                    vp[i].ft++;
                }
                else{
                    vp[i+1].ft++;
                }
            }
        }
        sort(vp.rbegin(),vp.rend());

    }
    for(i=0;i<2*n;i++){
        cout<<-vp[i].sd+1<<"\n";
    }
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
