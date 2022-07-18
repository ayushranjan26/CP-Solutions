/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}




void solve(){
    int n,k;
    cin>>n>>k;
    int p[n];
    for(int i1=0;i1<n;i1++){
        cin>>p[i1];
    }
    int ans=-1,ans2=-1;
    for(int i1=0;i1<n;i1++){
        if(abs(p[i1]-k)%p[i1]==0){
            if(ans==-1){
                ans=abs(p[i1]-k)/p[i1];
                ans2=p[i1];
            }
            else{
                ans=min(ans,abs(p[i1]-k)/p[i1]);
                if(ans==abs(p[i1]-k)/p[i1]){
                    ans2=p[i1];
                }
            }
        }
    }
    cout<<ans2;
    return;
}

int main()
{
 //   ios::sync_with_stdio(0);
  //  cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
