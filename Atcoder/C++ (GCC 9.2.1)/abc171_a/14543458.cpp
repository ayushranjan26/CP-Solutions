#include <iostream>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size()-1){
        cout<<"No";
    }
    else{
            int c1=1;
        for(int i1=0;i1<s.size();i1++){
            if(s[i1]!=t[i1]){
                c1=0;
                break;
            }
        }
            if(c1==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    }

    return 0;
}
