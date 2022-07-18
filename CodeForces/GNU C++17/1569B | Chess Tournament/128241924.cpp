#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
 
void solve(){
    int i,j,k,n;
    string s;
    cin>>n>>s;
    char a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                a[i][j]='X';
                continue;
            }
            a[i][j]='.';
        }
    }
    int c1=0,c2=0;
    vector<int> v;
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            c1++;
            for(j=0;j<n;j++){
                if(i!=j){
                    a[i][j]='=';
                    a[j][i]='=';
                }
            }
        }
        else{
            v.push_back(i);
            c2++;
        }
    }
    if(c2==0){
        cout<<"YES\n";
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    return;
    }
    if(c2<3){
        cout<<"NO";
        return;
    }
    cout<<"YES\n";
    a[v[0]][v[1]]='+';
    a[v[1]][v[0]]='-';
    a[v[1]][v[2]]='+';
    a[v[2]][v[1]]='-';
    for(i=0;i<n;i++){
        if(a[v[0]][i]=='.'){
            a[v[0]][i]='-';
            a[i][v[0]]='+';
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]=='.'){
                a[i][j]='=';
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
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