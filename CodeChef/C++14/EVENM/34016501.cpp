#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
       int n;
       cin>>n;
       int i=0;
       for(int i1=0;i1<n;i1++){
        if(i1%2==0){
            for(int i2=0;i2<n;i2++){
                i++;
                cout<<i<<" ";
            }
        }
        else{
                i+=(n+1);
            for(int i2=0;i2<n;i2++){
                i--;
                cout<<i<<" ";
            }
            i+=n-1;
        }
        cout<<"\n";
       }
    }
    return 0;
}
