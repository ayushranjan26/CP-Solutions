#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      long long ans=0,n;
      cin>>n;
      int a[n];
      for(int i1=0;i1<n;i1++){
        cin>>a[i1];
      }
      int ll=a[0];
      for(int i1=1;i1<n;i1++){
        if(a[i1]>ll){
            a[i1]=ll;
        }
        if(a[i1]<ll){
            ll=a[i1];
        }
      }
      for(int i1=0;i1<n;i1++){
        ans+=a[i1];
      }
      cout<<ans<<"\n";

  }
  return 0;
}
