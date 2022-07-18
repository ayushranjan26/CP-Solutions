#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int ans=0,i1=0;
        while(i1<s.size()-1){
            if(s[i1]=='x'&&s[i1+1]=='y'){
                ans++;
                i1+=2;
            }
            else if(s[i1]=='y'&&s[i1+1]=='x'){
                ans++;
                i1+=2;
            }
            else{
                i1++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
