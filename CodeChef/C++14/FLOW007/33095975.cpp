#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int s1=1;
        for(int i1=1;i1<=s.size();i1++){
        if(s1==1&&s[s.size()-i1]=='0'){

        }
        else{
            s1=0;
            cout<<s[s.size()-i1];
        }
        }
        cout<<endl;
    }
    return 0;
}
