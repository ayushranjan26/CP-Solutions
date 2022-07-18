/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
void solve(){
    int n,k,ans=0,x=0,y=0,z=0;
    cin>>n>>k;
    string s1;
    cin>>s1;
    for(int i1=0;i1<n;i1++){
        if(s1[i1]=='L'){
            z++;
        }
    }
    //cout<<z<<" ";
    if(k>z){
        k=z;
    }
    if(s1[0]=='W'){
        ans++;
    }
    for(int i1=1;i1<n;i1++){
        if(s1[i1]=='W'){
            ans++;
        }
        if(s1[i1-1]=='W'&&s1[i1]=='W'){
            ans++;
        }
    }
    y=ans;
    vector<int> v;
    int c1=0;
    int i=0;
    for(int i1=0;i1<n;i1++){
        if(s1[i1]=='W'){
            i=i1;
            break;
        }
    }
    x=i;
    for(int i1=i;i1<n;i1++){
        if(s1[i1]=='W'){
            if(c1!=0){
                v.push_back(c1);
            }
            c1=0;
        }
        else{
            c1++;
        }
    }
    sort(v.begin(),v.end());
    i=0;
    while(!v.empty()&&v[i]<=k){
        if(i==v.size()){
            break;
        }
        ans+=v[i]*2+1;
        k-=v[i];
        i++;
    }
 
    ans+=k*2;
    if(y==0){
        ans--;
    }
    if(ans<0){
        ans=0;
    }
    cout<<ans;//<<" "<<y;
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}