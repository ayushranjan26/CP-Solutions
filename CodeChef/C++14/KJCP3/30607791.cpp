#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,d1;
    cin>>t;
    vector<int> a;
    vector<int> b;
    while(t--){
        cin>>n;
        for(int i1=0;i1<n;i1++){
            scanf("%d",&d1);
            a.push_back(d1);
        }
        for(int i2=0;i2<n;i2++){
            scanf("%d",&d1);
            b.push_back(d1);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i3=0;i3<n;i3++){
            printf("%d %d ",a[i3],b[i3]);
        }
        printf("\n");
        a.clear();
        b.clear();
    }
    return 0;
}
