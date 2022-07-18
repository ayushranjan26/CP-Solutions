#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][3],ans;
        for(int i1=0;i1<n;i1++){
            cin>>a[i1][0]>>a[i1][1]>>a[i1][2];
            ans=(a[i1][1]+1)/2;
            if(a[i1][0]!=a[i1][2]){
                cout<<ans;
            }
            else{
                cout<<a[i1][1]-ans;
            }
            cout<<endl;
        }

    }
    return 0;
}
