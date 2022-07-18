#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
int n;
vector<int> v;
int a,b;
 
int memo[15][2][2][2];
 
int dp(int idx,int tight,int ca,int cb){
    if(idx==n){
        if(ca==1&&cb==1){
            /*for(int i=0;i<dig.size();i++){
                cout<<dig[i]<<" ";
            }
            cout<<endl;*/
            return 1;
        }
        return 0;
    }
    else if(memo[idx][tight][ca][cb]!=-1){
        return memo[idx][tight][ca][cb];
    }
    else{
        int res=0;
        if(tight){
            if(a<v[idx]){
                //dig.push_back(a);
                res+=dp(idx+1,0,1,cb);
                //dig.pop_back();
            }
            if(a==v[idx]){
                //dig.push_back(a);
                res+=dp(idx+1,1,1,cb);
                //dig.pop_back();
            }
            if(b<v[idx]){
                //dig.push_back(b);
                res+=dp(idx+1,0,ca,1);
                //dig.pop_back();
            }
            if(b==v[idx]){
                //dig.push_back(b);
                res+=dp(idx+1,1,ca,1);
                //dig.pop_back();
            }
        }
        else{
            //dig.push_back(a);
            res+=dp(idx+1,0,1,cb);
            //dig.pop_back();
 
            //dig.push_back(b);
            res+=dp(idx+1,0,ca,1);
            //dig.pop_back();
        }
        return memo[idx][tight][ca][cb]=res;
    }
}
 
int calc(int i,int j){
    a=i,b=j;
    int res=0;
    memset(memo,-1,sizeof(memo));
    if(a==0){
        for(int i1=0;i1<n;i1++){
            //vector<int> dig;
            if(i1==0){
                if(b<v[0]){
              //      dig.push_back(b);
                    res+=dp(1,0,0,1);
                }
                if(b==v[0]){
                    //dig.push_back(b);
                    res+=dp(1,1,0,1);
                }
            }
            else{
                //dig.push_back(b);
                res+=dp(i1+1,0,0,1);
            }
        }
        return res;
    }
    for(int i1=0;i1<n-1;i1++){
        //vector<int> dig;
        if(i1==0){
            res+=dp(i1,1,0,0);
        }
        else{
            res+=dp(i1,0,0,0);
        }
    }
    return res;
}
 
void solve(){
    int i,j,num;
    cin>>n;
    num=n;
    string s=to_string(n);
    for(i=0;i<s.size();i++){
        int d=(int)(s[i]-'0');
        v.push_back(d);
    }
    n=s.size();
 
    int res=0;
    for(i=0;i<9;i++){///counts double digit numbers
        for(j=i+1;j<=9;j++){
            res+=calc(i,j);
        }
    }
 
    for(int i=1;i<=9;i++){///counts single digits numbers
        int d=0;
        for(j=0;j<n;j++){
            d=d*10+i;
            if(d<=num){
                res++;
            }
        }
    }
    cout<<res;
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