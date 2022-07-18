#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    int d2=a[0];
    for(int i1=1;i1<n;i1++){
            d2=d2^a[i1];
    }
    for(int i1=0;i1<n;i1++){
        int d1=d2^a[i1];
        cout<<d1<<" ";
    }
    return 0;
}
