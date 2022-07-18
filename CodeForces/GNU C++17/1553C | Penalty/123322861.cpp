#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
int n=10;
void solve(){
    int i,j,k;
    string s,a,b;
    cin>>s;
    a=s,b=s;
    for(i=0;i<10;i+=2){
        if(a[i]=='?'){
            a[i]='1';
        }
    }
    for(i=1;i<10;i+=2){
        if(b[i]=='?'){
            b[i]='1';
        }
    }
    //cout<<a<<"\n"<<b<<endl;
    int ans=10;
    int score_a=0,score_b=0;
    for(i=0;i<10;i++){
        if(i%2==0&&a[i]=='1'){
            score_a++;
        }
        if(i%2==1&&s[i]=='1'){
            score_b++;
        }
        int rem;
        rem=(9-i+1)/2;
        if(score_a>score_b+rem){
            ans=min(ans,i+1);
        }
        //cout<<score_a<<" "<<score_b<<" "<<ans<<endl;
    }
    score_a=0,score_b=0;
    for(i=0;i<10;i++){
        if(i%2==0&&s[i]=='1'){
            score_a++;
        }
        if(i%2==1&&b[i]=='1'){
            score_b++;
        }
        int rem;
        rem=(9-i)/2;
        if(score_b>score_a+rem){
            ans=min(ans,i+1);
        }
        //cout<<score_a<<" "<<score_b<<" "<<rem<<endl;
    }
    cout<<ans;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}