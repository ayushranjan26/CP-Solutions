#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
void solve(){
    int i,j,k,n;
    cin>>n>>k;
    int a[2*n]={0};
    for(i=1;i<=k;i++){
        int x,y;
        cin>>x>>y;
        a[x-1]=i,a[y-1]=i;
    }
    j=k+1;
    for(i=0;i<2*n;i++){
        if(a[i]==0){
            a[i]=j;
            j++;
            if(j==n+1){
                j=k+1;
            }
        }
    }
 
    int ans=0,vis[2*n+1]={0};
    for(i=0;i<2*n;i++){
        //cout<<a[i]<<" ";
        if(vis[a[i]]==1){
            continue;
        }
        vis[a[i]]=1;
        set<int> st;
        for(j=i+1;j<2*n;j++){
            if(a[i]==a[j]){
                break;
            }
            else{
                if(st.find(a[j])!=st.end()){
                    st.erase(a[j]);
                }
                else{
                    st.insert(a[j]);
                }
            }
        }
        ans+=st.size();
        //cout<<ans<<" ";
    }
    cout<<ans/2;
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
/*
1 2 3 4 5  6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
7 2 8 9 10 1 6 7  3 3  6   5  4  1  5       4     2
                             (5,4)(4)
*/
 
 