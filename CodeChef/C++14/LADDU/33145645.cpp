#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,d1;
        cin>>n;
        int ans=0;
        string a,b;
        cin>>a;
        for(int i1=0;i1<n;i1++){
            cin>>b;
            if(b[0]=='T'){
                ans+=300;
            }
            if(b[0]=='B'){
                cin>>d1;
                ans+=d1;
            }
            if(b=="CONTEST_HOSTED"){
                ans+=50;
            }
            if(b=="CONTEST_WON"){
                cin>>d1;
                ans+=300;
                if(d1<20){
                    ans+=20-d1;
                }
            }
        }
        if(a[0]=='I'){
            cout<<ans/200;
        }
        else{
            cout<<ans/400;
        }
        cout<<endl;
    }
    return 0;
}
