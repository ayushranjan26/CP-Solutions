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
    string s;
    cin>>n>>m>>s;
    int pre1[n+2]={0},pre2[n+2]={0},pre3[n+2]={0},pre4[n+2]={0},pre5[n+2]={0},pre6[n+2]={0};
    int k1=0,k2=1,k3=2,k4=0,k5=2,k6=1;
    for(i=0;i<n;i++){
        pre1[i+1]=pre1[i],pre2[i+1]=pre2[i],pre3[i+1]=pre3[i];
        pre4[i+1]=pre4[i],pre5[i+1]=pre5[i],pre6[i+1]=pre6[i];
        if(s[i]!=(char)('a'+k1)){
            pre1[i+1]++;
        }
        if(s[i]!=(char)('a'+k2)){
            pre2[i+1]++;
        }
        if(s[i]!=(char)('a'+k3)){
            pre3[i+1]++;
        }
        if(s[i]!=(char)('a'+k4)){
            pre4[i+1]++;
        }
        if(s[i]!=(char)('a'+k5)){
            pre5[i+1]++;
        }
        if(s[i]!=(char)('a'+k6)){
            pre6[i+1]++;
        }
        k1++,k2++,k3++;
        k4--,k5--,k6--;
        k4+=3,k5+=3,k6+=3;
        k1%=3,k2%=3,k3%=3;
        k4%=3,k5%=3,k6%=3;
    }
 
    while(m--){
        int l,r;
        cin>>l>>r;
        cout<<min({pre1[r]-pre1[l-1],pre2[r]-pre2[l-1],pre3[r]-pre3[l-1],pre4[r]-pre4[l-1],pre5[r]-pre5[l-1],pre6[r]-pre6[l-1]})<<endl;
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
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 