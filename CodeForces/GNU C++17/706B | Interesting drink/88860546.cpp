/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
int rec(int n){
 
}
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i1=0;i1<n;i1++){
        cin>>p[i1];
    }
 
    sort(p.begin() , p.end());
    int q;
    cin>>q;
    vector<int> qbudget(q);
    for(int i1=0;i1<q;i1++){
        cin>>qbudget[i1];
    }
    //sort(qbudget.begin(),qbudget.end());
    for(int i1=0;i1<q;i1++){
        cout<<upper_bound(p.begin(),p.end(),qbudget[i1])-p.begin()<<"\n";
    }
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
   // cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}