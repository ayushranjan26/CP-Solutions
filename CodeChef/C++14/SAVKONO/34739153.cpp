/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE LARGE*/

#include <bits/stdc++.h>
using namespace std;
int chkpower2(int x){
    return (x&&!(x&x-1));
}
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        int n,z;
        cin>>n>>z;
        int a[n];
        for(int i1=0;i1<n;i1++){
            cin>>a[i1];
        }
        vector<int> v1;
        for(int i1=0;i1<n;i1++){
            while(a[i1]){
                v1.push_back(a[i1]);
                a[i1]/=2;
            }
        }
        sort(v1.rbegin(),v1.rend());
        int sum=0,ans=0;
        for(int i1=0;i1<v1.size();i1++){
             //   cout<<v1[i1]<<" ";
            sum+=v1[i1];
            ans++;
            if(sum>=z){
                break;
            }
        }
        if(sum<z){
            cout<<"Evacuate";
        }
        else{
            cout<<ans;
        }
        cout<<"\n";
    }
    return 0;
}
