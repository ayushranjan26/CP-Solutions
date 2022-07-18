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
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    vector<int> b,r;
    for(i=0;i<n;i++){
        if(s[i]=='B'){
            b.push_back(a[i]);
        }
        else{
            r.push_back(a[i]);
        }
    }
    sort(r.rbegin(),r.rend());
    sort(b.begin(),b.end());
    int c=1;
    for(i=0;i<b.size();i++){
        if(c>b[i]){
            cout<<"NO";
            return;
        }
        else{
            c++;
        }
    }
    c=n;
    for(i=0;i<r.size();i++){
        if(c<r[i]){
            cout<<"NO";
            return;
        }
        else{
            c--;
        }
    }
    cout<<"YES";
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