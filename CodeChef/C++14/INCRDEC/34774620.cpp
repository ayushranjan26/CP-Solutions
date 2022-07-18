/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
using namespace std;
int chkpower2(int x){
    return (x&&!(x&x-1));
}
void solve(){
    int n,maxx=0;
    cin>>n;
    int a[n];
    set<int> s1;
    map<int,int> m1;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        if(maxx<a[i1]){
            maxx=a[i1];
        }
        s1.insert(a[i1]);
        if(m1.find(a[i1])==m1.end()){
            m1.insert(make_pair(a[i1],0));
        }
        m1[a[i1]]++;
    }
    if(s1.size()==n){
        sort(a,a+n);
        cout<<"YES\n";
        for(int i1=n-1;i1>=0;i1--){
            cout<<a[i1]<<" ";
        }
        return ;
    }
    for(auto i1:m1){
        if(i1.second>2){
            cout<<"NO";
            return;
        }
    }
    if(m1[maxx]>1){
        cout<<"NO";
        return;
    }
    vector<int> a2,b2;
    for(auto i1:m1){
        if(i1.second==2){
            a2.push_back(i1.first);
            b2.push_back(i1.first);
        }
        if(i1.second==1){
            a2.push_back(i1.first);
        }
    }
    sort(a2.begin(),a2.end());
    sort(b2.rbegin(),b2.rend());
    cout<<"YES\n";
    for(int i1=0;i1<a2.size();i1++){
        cout<<a2[i1]<<" ";
    }
    for(int i1=0;i1<b2.size();i1++){
        cout<<b2[i1]<<" ";
    }
    return;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
