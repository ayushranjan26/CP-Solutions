#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
vector<int> primeFactors(int n){
    vector<int> v;
    int d=n;
    while (n%2==0){
        v.push_back(2);
        n=n/2;
    }
    for (int i=3;i<=sqrt(n);i=i+2){
        while (n%i==0){
            v.push_back(i);
            n=n/i;
        }
    }
    if(n>2){
        v.push_back(n);
    }
    return v;
}
 
 
void solve(){
    int i,j,q;
    cin>>q;
    vector<int> res=primeFactors(q);
    if(res.size()>0&&res.back()==q){
        res.pop_back();
    }
    else{
 
    }
    if(res.size()==0){
        cout<<"1\n0";
    }
    else if(res.size()<=2){
        cout<<"2";
    }
    else{
        cout<<"1\n";
        cout<<res[0]*res[1];
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