#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int s[n],p[n],v[n],pr;
      for(int i1=0;i1<n;i1++){
        cin>>s[i1]>>p[i1]>>v[i1];
      }
      int ans1=0;
      for(int i1=0;i1<n;i1++){
            pr=v[i1]*(p[i1]/(s[i1]+1));
        if(pr>ans1){
            ans1=pr;
        }
      }
      cout<<ans1<<"\n";

  }
  return 0;
}
