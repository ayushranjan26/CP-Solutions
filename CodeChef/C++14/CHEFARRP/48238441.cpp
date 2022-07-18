#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//

void solve()
{
    int i,j,k,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(i=0;i<n;i++){
        int mul=1,sum=0;
        for(j=i;j<n;j++){
            mul*=a[j];
            sum+=a[j];
            if(mul==sum)ans++;
        }
    }
    cout<<ans;
    return;
}

int main(){
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
