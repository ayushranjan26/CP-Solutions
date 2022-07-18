/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int n;
    cin>>n;
    string s1;
    cin>>s1;
 
    int freq[150]={0};
 
    set<char> st1;
    for(int i1=0;i1<n;i1++){
        st1.insert(s1[i1]);
    }
    freq[(int)s1[0]]++;
 
    int dstnct=st1.size(),vcnt=1;
    int l=0,r=1;
 
    int ans=1e5;
    while(r<n&&l<=r){
        while(vcnt<dstnct&&r<n){
            freq[(int)s1[r]]++;
            if(freq[(int)s1[r]]==1){
                vcnt++;
            }
            r++;
        }
        while(vcnt==dstnct&&l<r){
            freq[(int)s1[l]]--;
            if(freq[(int)s1[l]]==0){
                vcnt--;
            }
            l++;
        }
        ans=min(ans,r-l+1);
    }
    if(n==1){
        ans=1;
    }
    cout<<ans;
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
   // cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}