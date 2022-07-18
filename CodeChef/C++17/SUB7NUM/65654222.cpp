#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7,m=1e9+7;

int power(int x,int y) {
	int temp;
	if( y == 0)
		return 1;
	temp = power(x, y/2)%m;
	if (y%2 == 0)
		return ((temp)*(temp))%m;
	else
		return (((x)%m)*((temp*temp)%m))%m;
}

int a[300005],n,memo[300005][7];
int dp(int idx,int sum){
    if(idx==n){
        return 0;
    }
    else if(memo[idx][sum]!=-1){
        return memo[idx][sum];
    }
    else{
        int res=0,temp=sum;
        res+=dp(idx+1,sum);
        res%=mod;
        string s=to_string(a[idx]);
        sum=sum*power(10,s.size())+a[idx];
        sum%=7;
        if(sum==0){
            res++;
        }
        res+=dp(idx+1,sum);
        res%=mod;
        return memo[idx][temp]=res;
    }
}

void solve(){
    int i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<=n;i++){
        for(j=0;j<7;j++){
            memo[i][j]=-1;
        }
    }
    cout<<dp(0,0);
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
