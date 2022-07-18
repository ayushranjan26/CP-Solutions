/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
using namespace std;
int chkpower2(int x){
    return (x&&!(x&x-1));
}

void solve(){
    long long int n,ans=0;
    cin>>n;
    long long int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    for(int i1=1;i1<n;i1++){
        if(a[i1]==a[i1-1]){
            continue;
        }
        ans+=abs(a[i1]-a[i1-1])-1;
    }
    cout<<ans;
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
