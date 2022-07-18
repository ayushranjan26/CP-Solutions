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
    int i,j,k,n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    n=s.size();
    int cnt=0;
    int mark[n]={0};
    for(i=2;i<n;i++){
        if(s[i]=='c'&&s[i-1]=='b'&&s[i-2]=='a'){
            mark[i]=1;
            mark[i-1]=1;
            mark[i-2]=1;
            cnt++;
        }
    }
 
    while(q--){
        int pos;
        char c;
        cin>>pos>>c;
        pos--;
        if(s[pos]==c){
            cout<<cnt;
        }
        else{
            if(mark[pos]==1){
                if(s[pos]=='a'){
                        mark[pos]=0;
                        mark[pos+1]=0;
                        mark[pos+2]=0;
                }
                if(s[pos]=='b'){
                    mark[pos]=0;
                    mark[pos-1]=0;
                    mark[pos+1]=0;
                }
                if(s[pos]=='c'){
                    mark[pos]=0;
                    mark[pos-1]=0;
                    mark[pos-2]=0;
                }
                int fl=0;
                if(c=='a'&&pos<n-2&&s[pos+1]=='b'&&s[pos+2]=='c'){
                        cout<<cnt;
                        fl=1;
                        mark[pos]=1;
                        mark[pos+1]=1;
                        mark[pos+2]=1;
                }
                if(c=='b'&&pos<n-1&&pos>0&&s[pos+1]=='c'&&s[pos-1]=='a'){
                        cout<<cnt;
                        fl=1;
                        mark[pos]=1;
                        mark[pos-1]=1;
                        mark[pos+1]=1;
                }
                if(c=='c'&&pos<n&&pos>1&&s[pos-1]=='b'&&s[pos-2]=='a'){
                        cout<<cnt;
                        fl=1;
                        mark[pos]=1;
                        mark[pos-1]=1;
                        mark[pos-2]=1;
 
                }
                if(fl==0){
                    cnt--;
                    cout<<cnt;
                }
            }
            else{
                if(c=='a'&&pos<n-2&&s[pos+1]=='b'&&s[pos+2]=='c'){
                        cout<<cnt+1;
                        cnt++;
                        mark[pos]=1;
                        mark[pos+1]=1;
                        mark[pos+2]=1;
                }
                else if(c=='b'&&pos<n-1&&pos>0&&s[pos+1]=='c'&&s[pos-1]=='a'){
                        cout<<cnt+1;
                        cnt++;
                        mark[pos]=1;
                        mark[pos-1]=1;
                        mark[pos+1]=1;
                }
                else if(c=='c'&&pos<n&&pos>1&&s[pos-1]=='b'&&s[pos-2]=='a'){
                        cout<<cnt+1;
                        cnt++;
                        mark[pos]=1;
                        mark[pos-1]=1;
                        mark[pos-2]=1;
                }
                else{
                    cout<<cnt;
                }
            }
        }
        s[pos]=c;
        cout<<endl;
        /*cout<<s<<" \n";
        for(i=0;i<n;i++){
            cout<<mark[i]<<"";
        }
        cout<<endl;*/
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