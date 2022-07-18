/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}


void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n],freqf[k]={0};
    int distnctflav=1;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        a[i1]--;
    }
    int l=0,r=0;
    int ans=1;
    freqf[a[0]]++;
    while(1){
           // cout<<"f";
        while(++r<n&&distnctflav<k){
           // cout<<"g";
            if(freqf[a[r]]==0){
                distnctflav++;
            }
            freqf[a[r]]++;
            if(distnctflav<k){
                ans=max(ans,r-l+1);
            }
        }
        if(r==n)break;
        r--;
        while(distnctflav==k&&l<=r){
            if(freqf[a[l]]==1){
                distnctflav--;
            }
            freqf[a[l]]--;
            l++;
        }
        //ans=max(ans,r-l+1);
        //cout<<ans<<" ";
    }
    cout<<ans;
	return;
}

int main()
{
   // ios::sync_with_stdio(0);
  //  cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}

