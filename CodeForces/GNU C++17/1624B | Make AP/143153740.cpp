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
    int i,j,k,a,b,c;
    cin>>a>>b>>c;
    if(abs(a-c)%2==0){
        int d=(c-a)/2;
        int new_b=a+d;
        if(b!=0&&new_b%b==0&&new_b/b>0){
            cout<<"YES";
            return;
        }
    }
    int d=b-a;
    int new_c=b+d;
    if(c!=0&&new_c%c==0&&new_c/c>0){
        cout<<"YES";
        return;
    }
    d=c-b;
    int new_a=b-d;
    if(a!=0&&new_a%a==0&&new_a/a>0){
        cout<<"YES";
        return;
    }
    cout<<"NO";
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}