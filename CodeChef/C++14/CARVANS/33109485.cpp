#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i1=0;i1<n;i1++){
            scanf("%d",&a[i1]);
        }
        int bar=a[0],ans=0;
        for(int i1=0;i1<n;i1++){
            if(a[i1]<=bar){
                bar=a[i1];
                ans++;
            }
        }
        printf("%d\n",ans);
    }


    return 0;
}
