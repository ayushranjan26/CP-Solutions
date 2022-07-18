#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        int sum1=0,sum2=0,a[n];
        for(int i1=0;i1<n;i1++){
            cin>>a[i1];
            sum1+=a[i1];
            if(a[i1]>k){
                sum2+=k;
            }
            else{
                sum2+=a[i1];
            }
        }
        cout<<sum1-sum2<<"\n";
    }
    return 0;
}
