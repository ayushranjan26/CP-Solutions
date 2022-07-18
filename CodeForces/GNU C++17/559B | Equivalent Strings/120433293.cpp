#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll M =1000000007;
string a,b;
bool rec(int l1,int r1,int l2,int r2){
    if(r1-l1!=r2-l2)
        return false;
    if(a.substr(l1,r1-l1+1)==b.substr(l2,r2-l2+1))
        return true;
    if(r1-l1==0||(r1-l1+1)%2==1)
        return false;
    int cnt=0;
    if(cnt%2==0){
        if((rec(l1,(l1+r1)/2,l2,(l2+r2)/2)&&rec((l1+r1)/2+1,r1,(l2+r2)/2+1,r2))){
            return true;
        }
        if((rec((l1+r1)/2+1,r1,l2,(l2+r2)/2)&&rec(l1,(l1+r1)/2,(l2+r2)/2+1,r2))){
            return true;
        }
    }
    if(cnt%2==1){
        if((rec((l1+r1)/2+1,r1,l2,(l2+r2)/2)&&rec(l1,(l1+r1)/2,(l2+r2)/2+1,r2))){
            return true;
        }
        if((rec(l1,(l1+r1)/2,l2,(l2+r2)/2)&&rec((l1+r1)/2+1,r1,(l2+r2)/2+1,r2))){
            return true;
        }
    }
    return false;
}
void solve()
{
    int i,j,k,l,n;
    cin>>a>>b;
    n=a.size();
    if(rec(0,n-1,0,n-1)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return;
}
 
int main(){
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
 