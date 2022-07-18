#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(long long i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    long long ans=0,sum=0;
    sort(a,a+n);
    for(long long i1=0;i1<n;i1++){
        sum=a[i1]*(n-i1);
        if(sum>=ans){
            ans=sum;
         }

        }

    cout<<ans;
    return 0;
}
