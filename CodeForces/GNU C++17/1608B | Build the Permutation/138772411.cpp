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
    int i,j,n,a,b,ca,cb,c2a,c2b;
    cin>>n>>a>>b;
    ca=a,cb=b;
    c2a=a,c2b=b;
    if(abs(a-b)>1){
        cout<<"-1";
        return;
    }
    else if(a==0&&b==0){
        for(i=0;i<n;i++){
            cout<<i+1<<" ";
        }
    }
    else if(a>b){
        vector<int> v(n,0);
        j=n;
        for(i=1;i<n-1&&a>0;i+=2){
            a--;
            v[i]=j;
            j--;
        }
        for(i=0;i<n;i++){
            if(v[i]!=0){
                continue;
            }
            v[i]=j;
            j--;
        }
        if(a!=0){
            cout<<"-1";
            return;
        }
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
    else if(a<b){
        vector<int> v(n,0);
        j=1;
        for(i=1;i<n-1&&b>0;i+=2){
            b--;
            v[i]=j;
            j++;
        }
        for(i=0;i<n;i++){
            if(v[i]!=0){
                continue;
            }
            v[i]=j;
            j++;
        }
        if(b!=0){
            cout<<"-1";
            return;
        }
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
    else{
        if(n==1){
            cout<<"-1";
            return;
        }
        vector<int> v(n,0);
        j=1;
        for(i=1;i<n-1&&b>0;i+=2){
            b--;
            v[i]=j;
            j++;
        }
        for(i=0;i<n;i++){
            if(v[i]!=0){
                continue;
            }
            v[i]=j;
            j++;
        }
        //cout<<v[n-1]<<" "<<v[n-2]<<" ";
        swap(v[n-1],v[n-2]);
        for(i=1;i<n-1;i++){
            if(v[i]>v[i-1]&&v[i]>v[i+1]){
                ca--;
            }
            if(v[i]<v[i-1]&&v[i]<v[i+1]){
                cb--;
            }
        }
        if(ca==0&&cb==0){
            for(i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            return;
        }
 
        ca=c2a,cb=c2b;
        a=c2a,b=c2b;
        vector<int> v1(n,0);
        j=n;
        for(i=1;i<n-1&&a>0;i+=2){
            a--;
            v1[i]=j;
            j--;
        }
        for(i=0;i<n;i++){
            if(v1[i]!=0){
                continue;
            }
            v1[i]=j;
            j--;
        }
        swap(v1[n-1],v1[n-2]);
        for(i=1;i<n-1;i++){
            if(v1[i]>v1[i-1]&&v1[i]>v1[i+1]){
                ca--;
            }
            if(v1[i]<v1[i-1]&&v1[i]<v1[i+1]){
                cb--;
            }
        }
        if(ca==0&&cb==0){
            for(i=0;i<n;i++){
                cout<<v1[i]<<" ";
            }
            return;
        }
        cout<<"-1";
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