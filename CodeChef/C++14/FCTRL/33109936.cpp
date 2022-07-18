#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        while(n>=5){

            ans+=n/5;
            n=n/5;
        }
        cout<<ans<<endl;
    }


    return 0;
}
