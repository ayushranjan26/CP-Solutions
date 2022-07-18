#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int ans=0,c1=0;
    string s;
    cin>>s;
    stack<char> stk;
    int l=s.size();
    for(int i1=0;i1<l;i1++){
        if(s[i1]=='<'){
            stk.push(s[i1]);
        }
        if(s[i1]=='>'){
            if(stk.empty()){
                break;
            }
            else{
                stk.pop();
                c1++;
            }
        }
        if(stk.empty()){
            ans=i1+1;
        }
    }
      cout<<ans<<"\n";
  }
  return 0;
}
