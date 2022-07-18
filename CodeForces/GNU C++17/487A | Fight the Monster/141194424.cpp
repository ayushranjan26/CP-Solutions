#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
int hy,hm,ay,am,dy,dm,ph,pa,pd;
 
bool chk(int i,int j,int k){
    int inc_h=i+hy;
    int inc_a=j+ay;
    int inc_d=k+dy;
    if(inc_a<=dm){
        return false;
    }
    if(am<=inc_d){
        return true;
    }
    int t1=hm/(inc_a-dm);
    if(hm%(inc_a-dm)!=0){
        t1++;
    }
    int t2=inc_h/(am-inc_d);
    if(inc_h%(am-inc_d)!=0){
        t2++;
    }
    //cout<<inc_h<<" "<<inc_a<<" "<<inc_d<<endl;
    //cout<<t1<<" "<<t2<<endl;
    if(t1<t2){
        return true;
    }
    return false;
}
void solve(){
    int i,j,k;
    cin>>hy>>ay>>dy;
    cin>>hm>>am>>dm;
    cin>>ph>>pa>>pd;
    int cost=100*(pa+pd+ph);
    for(i=0;i<=1005;i++){
        for(j=0;j<=1005;j++){
            for(k=0;k<=105;k++){
                if(chk(i,j,k)){
                    cost=min(cost,i*ph+j*pa+k*pd);
                }
            }
        }
    }
    cout<<cost;
    return;
}
 
int32_t main(){
    IOS;
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