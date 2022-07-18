#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e7+9;
 
void solve(){
    int i,j,k,n,m,d;
    cin>>n>>m>>d;
    string a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    set<pii> st;
    set<pii> st3;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]=='*'){
                st.insert({i,j});
                set<pii> st2;
                for(k=0;;k++){
                    if(i-k>=0&&j+k<m&&j-k>=0&&a[i-k][j+k]=='*'&&a[i-k][j-k]=='*'){
                        st2.insert({i-k,j+k});
                        st2.insert({i-k,j-k});
                    }
                    else{
                        break;
                    }
                }
                if(st2.size()>=2*d+1){
                    //cout<<i<<" "<<j<<endl;
                    while(!st2.empty()){
                        //cout<<st2.begin()->ft<<" "<<st2.begin()->sd<<endl;
                        st3.insert(*st2.begin());
                        st2.erase(st2.begin());
                    }
                    //cout<<"\n";
                }
 
            }
        }
    }
    //cout<<st3.size()<<" ";
    if(st3.size()==st.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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