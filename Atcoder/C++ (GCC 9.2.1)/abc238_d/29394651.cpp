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
    int i,j,a,s;
    cin>>a>>s;
    int bita[64]={0},bits[64]={0};
    for(i=0;i<64;i++){
        if((a&(1LL<<i))!=0){
            bita[i]=1;
        }
        if((s&(1LL<<i))!=0){
            bits[i]=1;
        }
    }
    int cnt1=0;
    for(i=0;i<64;i++){
        if(bita[i]==1){
            if(bits[i]==1){
                cout<<"No";
                return ;
            }
            break;
        }
    }
    int chk=0;
    for(i=63;i>=0;i--){
        if(bita[i]==1){
            if(cnt1==0){
                cout<<"No";
                return ;
            }
            cnt1=0;
            cnt1+=bits[i];
            if(cnt1){
                chk=1;
            }
            else{
                chk=0;
            }
        }
        else{
            if(chk){
                if(bits[i]==1){
                    cout<<"No";
                    return ;
                }
            }
            cnt1+=bits[i];
        }
    }

    cout<<"Yes";
    return;
}

int32_t main(){
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
