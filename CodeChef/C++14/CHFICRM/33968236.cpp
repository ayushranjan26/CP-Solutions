#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n],cf1=0,cf2=0,cf3=0;
        for(int i1=0;i1<n;i1++){
            cin>>a[i1];
        }
        bool ck1=true;
        for(int i1=0;i1<n;i1++){
            if(a[i1]==5){
                cf1++;
            }
            else if(a[i1]==10){
                if(cf1==0){
                    ck1=false;
                    break;
                }
                else{
                    cf1--;
                    cf2++;
                }
            }
            else{
                if(cf2==0&&cf1<2){
                    ck1=false;
                    break;
                }
                else{
                    if(cf2!=0){
                        cf2--;
                    }
                    else{
                        cf1-=2;
                    }
                }
            }
        }
        if(ck1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
