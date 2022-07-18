 #include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    string r="",c="";
    for(i=0;i<s.size();i++){
        if(s[i]=='L'||s[i]=='R'){
            c+=s[i];
        }
        else{
            r+=s[i];
        }
    }
    //cout<<r<<" "<<c<<endl;
    int mx=0,mn=0,val=0;
    int row=1,col=1;
    for(i=0;i<r.size();i++){
        if(r[i]=='U'){
            val--;
        }
        else{
            val++;
        }
        mx=max(mx,val);
        mn=min(mn,val);
        //cout<<mn<<" r "<<mx<<endl;
        if(mx-mn+1<=n){
            row=1+abs(mn);
        }
    }
 
    val=0;
    mx=0,mn=0;
    for(i=0;i<c.size();i++){
        if(c[i]=='L'){
            val--;
        }
        else{
            val++;
        }
        mx=max(mx,val);
        mn=min(mn,val);
        //cout<<mn<<" c "<<mx<<endl;
        if(mx-mn+1<=m){
            col=1+abs(mn);
        }
    }
    cout<<row<<" "<<col;
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