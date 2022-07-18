#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
            int d1;
        string s;
        cin>>s;
        int c1=0;
        for(int i1=0;i1<(s.size())/2;i1++){
                d1=(s.size()/2);
                if(s.size()%2==1){
                    d1++;
                }
            for(int i2=d1;i2<s.size();i2++){
                if(s[i1]==s[i2]){
                    s[i2]='-1';
                    c1++;
                    break;
                }
            }
        }
        if(c1==s.size()/2){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
    }
    return 0;
}
