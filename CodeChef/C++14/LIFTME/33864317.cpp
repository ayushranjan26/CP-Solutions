#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,q;
    cin>>t;
    while(t--){
        cin>>n>>q;
        int a1,b1;
        long long sum=0;
        int prev=0;
        for(int i1=0;i1<q;i1++){
            cin>>a1>>b1;
            sum+=abs(a1-b1);
            sum+=abs(prev-a1);
            prev=b1;
        }
        cout<<sum<<endl;

    }
    return 0;
}
