/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v1,v2,v12;
    for(int i1=0;i1<n;i1++){
        int d1,d2,d3;
        cin>>d1>>d2>>d3;
        if(d2==0&&d3==0){
            continue;
        }
        if(d2==1&&d3==0){
            v1.push_back(d1);
        }
        if(d2==0&&d3==1){
            v2.push_back(d1);
        }
        if(d2==1&&d3==1){
            v12.push_back(d1);
        }
    }
    sort(v1.rbegin(),v1.rend());
    sort(v2.rbegin(),v2.rend());
    sort(v12.rbegin(),v12.rend());
    ll ans=0;
    if(v1.size()+v12.size()<k||v2.size()+v12.size()<k){
        cout<<"-1";
        return;
    }
    while(k--){
        if(v1.size()==0||v2.size()==0){
            ans+=v12.back();
            v12.pop_back();
        }
        else{
            if(v12.size()==0||v1.back()+v2.back()<v12.back()){
                ans+=v1.back()+v2.back();
                v1.pop_back();
                v2.pop_back();
            }
            else{
                ans+=v12.back();
                v12.pop_back();
            }
        }
    }
    cout<<ans;
}
 
int main()
{
   // ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}