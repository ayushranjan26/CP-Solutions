#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7 ;

void solve(){
    int i,j,k,n;
    cin>>n;
    char s[n][n],t[n][n];
    string str;
    int c1=0,c2=0;
    for(i=0;i<n;i++){
        cin>>str;
        for(j=0;j<n;j++){
            s[i][j]=str[j];
            if(s[i][j]=='#'){
                c1++;
            }
        }
    }
    for(i=0;i<n;i++){
        cin>>str;
        for(j=0;j<n;j++){
            t[i][j]=str[j];
            if(t[i][j]=='#'){
                c2++;
            }
        }
    }
    if(c1!=c2){
        cout<<"No";
        return;
    }
    int turn=4;
    while(turn--){
        char temp[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                temp[i][j]=t[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                t[i][j]=temp[j][i];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                temp[i][j]=t[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                t[i][j]=temp[i][n-1-j];
            }
        }
        int si,sj,ti,tj;
        for(i=0;i<n;i++){
            bool f=false;
            for(j=0;j<n;j++){
                if(t[i][j]=='#'){
                    ti=i;
                    tj=j;
                    f=true;
                    break;
                }
            }
            if(f){
                break;
            }
        }
        for(i=0;i<n;i++){
            bool f=false;
            for(j=0;j<n;j++){
                if(s[i][j]=='#'){
                    si=i;
                    sj=j;
                    f=true;
                    break;
                }
            }
            if(f){
                break;
            }
        }
        //cout<<ti<<" "<<tj<<endl;
        set<pair<int,int>> st;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(t[i][j]=='#'){
                    //cout<<i-ti<<" "<<j-tj<<endl;
                    st.insert({i-ti,j-tj});
                }
            }
        }
        //cout<<endl;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(s[i][j]=='#'){
                    //cout<<i-si<<" "<<j-sj<<endl;
                    st.erase({i-si,j-sj});
                }
            }
        }
        if(st.empty()){
            cout<<"Yes";
            return;
        }
    }
    turn=4;
    while(turn--){
        char temp[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                temp[i][j]=t[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                t[i][j]=temp[j][i];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                temp[i][j]=t[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                t[i][j]=temp[n-1-i][j];
            }
        }
        int si,sj,ti,tj;
        for(i=0;i<n;i++){
            bool f=false;
            for(j=0;j<n;j++){
                if(t[i][j]=='#'){
                    ti=i;
                    tj=j;
                    f=true;
                    break;
                }
            }
            if(f){
                break;
            }
        }
        for(i=0;i<n;i++){
            bool f=false;
            for(j=0;j<n;j++){
                if(s[i][j]=='#'){
                    si=i;
                    sj=j;
                    f=true;
                    break;
                }
            }
            if(f){
                break;
            }
        }
        //cout<<ti<<" "<<tj<<endl;
        set<pair<int,int>> st;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(t[i][j]=='#'){
                    //cout<<i-ti<<" "<<j-tj<<endl;
                    st.insert({i-ti,j-tj});
                }
            }
        }
        //cout<<endl;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(s[i][j]=='#'){
                    //cout<<i-si<<" "<<j-sj<<endl;
                    st.erase({i-si,j-sj});
                }
            }
        }
        if(st.empty()){
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";
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
