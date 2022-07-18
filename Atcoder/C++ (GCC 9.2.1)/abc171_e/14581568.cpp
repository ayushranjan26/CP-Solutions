#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    sort(a,a+n);
    int ans=0;
    for(int i1=0;i1<k;i1++){
        ans+=a[i1];
    }
    cout<<ans;
    return 0;
}
