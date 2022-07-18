#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;
int power(int x,int y) {
	int temp;
	if( y == 0)
		return 1;
	temp = power(x, y/2)%mod;
	if (y%2 == 0)
		return ((temp)*(temp))%mod;
	else
		return (((x)%mod)*((temp*temp)%mod))%mod;
}
void solve(){
    int i,j,n,res=0;
    string s,t;
    cin>>n>>s;
    if(n%2==1){
        t="";
        for(i=0;i<n/2;i++){
            t+=s[i];
        }
        bool f=false;
        for(i=n/2+1;i<n;i++){
            if(s[i]>t.back()){
                f=true;
                break;
            }
            else if(s[i]==t.back()){
                t.pop_back();
            }
            else{
                break;
            }
        }
        t=s;
        reverse(t.begin(),t.end());
        if(t==s){
            f=true;
        }
        if(f){
            res++;
        }
        for(i=n/2;i>=0;i--){
            res+=(int)(s[i]-'A')*power(26,n/2-i);
            res%=mod;
        }
    }
    else{
        t="";
        for(i=0;i<n/2;i++){
            t+=s[i];
        }
        bool f=false;
        for(i=n/2;i<n;i++){
            if(s[i]>t.back()){
                f=true;
                break;
            }
            else if(s[i]==t.back()){
                t.pop_back();
            }
            else{
                break;
            }
        }
        t=s;
        reverse(t.begin(),t.end());
        if(t==s){
            f=true;
        }
        if(f){
            res++;
        }
        for(i=n/2-1;i>=0;i--){
            res+=(int)(s[i]-'A')*power(26,n/2-1-i);
            res%=mod;
        }
    }
    cout<<res;
    return;
}

int32_t main(){
    IOS;
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
