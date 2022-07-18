#include <bits/stdc++.h>

#define mod 1000000007//998244353
#define PI 3.141592653589

#define ANKIT ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
const long long INF=1e18;
const long long mINF=(-1)*INF;
const long long N=2e5+4;
#define int long long int
using namespace std;
int32_t main()
{
    ANKIT


 int t=1;
//int t;
//cin>>t;

while(t--)
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    bool check=true;
    //vector<bool> p11()
    int p1=a[0];
    int p2=b[0];
    if(n==1)
    {
        cout<<"Yes";
        continue;
    }
    for(int i=1;i<n;i++)
    {      bool c=true;
            int temp1,temp2;
          if(abs(a[i]-p1)<=x || abs(a[i]-p2)<=x)
          {
           temp1=a[i];
           c=false;
          }
          else
          {
            temp1=-200000000000;
          }
          if(abs(b[i]-p1)<=x || abs(b[i]-p2)<=x)
          {
           temp2=b[i];
           c=false;
          }
          else
          {
            temp2=-200000000000;
          }
          if(c)
          {
            cout<<"No";
            check=false;
            break;
          }
            p1=temp1;
            p2=temp2;
    }
    if(check)
    {
        cout<<"Yes";
    }
}
 #ifndef ONLINE_JUDGE
cerr << "[Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s] ";
#endif
 return 0;


  }
