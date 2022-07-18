#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
       long long int n,ans=0;
        cin>>n;
        if(n%2==1){
            ans=n/2;
        }
        else{
            long long i1=2,c1=n/2;
            while(i1<=n){
                    i1=i1*2;
                    if(n%i1!=0){
                        break;
                    }
                    c1=n/i1;
            }
            ans=c1/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
