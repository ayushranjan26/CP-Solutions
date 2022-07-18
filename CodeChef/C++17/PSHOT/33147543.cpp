#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int ans=0,n,sa=0,sb=0;
      string s;
      cin>>n>>s;
      int n1=n,n2=n;
      for(int i1=0;i1<2*n;i1+=2){
        if(s[i1]=='1'){
            sa++;
        }
        n1--;
        if(sa+n1<sb){
            ans=2*n-n1-n2;
            break;
        }
        if(sb+n2<sa){
          ans=2*n-n1-n2;
            break;
        }
        if(s[i1+1]=='1'){
            sb++;
        }
        n2--;
        if(sb+n2<sa){
            ans=2*n-n1-n2;
            break;
        }
        if(sa+n2<sb){
            ans=2*n-n1-n2;
            break;
        }
      }
      if(ans==0){
        ans=2*n;
      }
      cout<<ans<<"\n";

  }
  return 0;
}
