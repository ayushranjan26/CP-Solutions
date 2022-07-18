/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
using namespace std;

    int chkpower2(int x){
        return (x&&!(x&x-1));
    }


    void solve(){
       long long int d1,n,i=0,sum=0;
        cin>>n;
        int a[n];
        vector<int> ans;
        for(int i1=0;i1<n;i1++){
            cin>>a[i1];
            ans.push_back(a[i1]);
            ans.push_back(a[i1]);
        }
        sort(ans.begin(),ans.end());
        ans.pop_back();
        sort(ans.rbegin(),ans.rend());
        for(int i1=0;i1<n-1;i1++){
            sum+=ans[i1];
        }
        cout<<sum;

    }

    int main()
    {
        //ios::sync_with_stdio(0);
        //cin.tie(0);

        int t;
       t=1;//cin>>t;
        while(t--){
            solve();
            cout<<"\n";
        }
        return 0;
    }
