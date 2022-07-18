#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

int cnt=0;
int ok[1000001];
queue<int> q;
void solve(){
    int i,j,n,x;
    cin>>n>>x;
    string s;
    cin>>s;

    int cnt=0;
    for(i=n-1;i>=0;i--){
        if(s[i]=='U'){
            cnt++;
            q.push(i);
        }
        else{
            if(cnt>0){
                ok[i]=1;
                ok[q.front()]=1;
                q.pop();
                cnt--;
            }
        }
    }
    for(i=0;i<n;i++){
        if(ok[i]==0){
            if(s[i]=='R'){
                x=2*x+1;
            }
            else if(s[i]=='L'){
                x=2*x;
            }
            else{
                x=x/2;
            }
        }
    }
    cout<<x;
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
