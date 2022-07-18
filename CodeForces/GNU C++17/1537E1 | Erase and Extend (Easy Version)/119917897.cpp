/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
ll M =1000000007;
 
void solve()
{
    int i,j,k,l,n;
    cin>>n>>k;
    n=2*n;
    string s,s1="";
    cin>>s;
    s+=s;
    s1+=s[0];
    int i1=-1;
    for(i=1;i<n;i++){
        if(s[i]>s[0]){
            i1=i;
            break;
        }
        if(s[i]==s[0]){
            l=i;
            j=0;
            while(j<s1.size()){
                if(s1[j]<s[l+j]){
                    i1=i;
                    //cout<<s1[j]<<" "<<s[l+j]<<" "<<j<<endl;
                    break;
                }
                if(s1[j]>s[l+j]){
                    break;
                }
                j++;
            }
            if(i1!=-1){
                break;
            }
        }
        s1+=s[i];
    }
    string ans="";
    for(i=0;i<i1;i++){
        ans+=s[i];
    }
    if(i1==-1){
        ans=s;
    }
    while(ans.size()<k){
        ans+=ans;
    }
    for(i=0;i<k;i++){
        cout<<ans[i];
    }
    return ;
}
 
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}