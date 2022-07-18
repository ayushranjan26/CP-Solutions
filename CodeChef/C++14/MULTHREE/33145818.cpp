#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[]={2,4,8,6};
  while(n--)
  {
    long long int a,b,c,s,p,k=0;
    cin>>a>>b>>c;
    s=(b+c);
    if(a==2)
    {
      if(s%3==0) cout<<"YES\n";
      else cout<<"NO\n";
      continue;
    }
    p=(a-3)/4;
    for(int i=0;i<4;i++) k+=p*((arr[i]*s)%10);
    p=(a-3)%4;
    for(int i=0;i<p;i++) k+=((arr[i]*s)%10);
    k+=s+s%10;
    if(k%3==0) cout<<"YES\n";
    else  cout << "NO" << '\n';
  }
  return 0;
}