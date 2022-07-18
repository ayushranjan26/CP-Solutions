/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}


void solve(){
    int n,d1;
    cin>>n;
    int crt=0;
    map<int,int> m1;

    int minm=1e9;
    for(int i1=0;i1<n;i1++){
        cin>>d1;
        minm=min(d1,minm);
        crt=crt^d1;
        if(m1.find(d1)==m1.end()){
            m1[d1]=0;
        }
        m1[d1]++;
    }
    for(int i1=0;i1<n;i1++){
        cin>>d1;
        minm=min(d1,minm);
        crt=crt^d1;
        if(m1.find(d1)==m1.end()){
            m1[d1]=0;
            if(m1.find(d1)==m1.end()){
                m1[d1]=0;
            }
        }
        m1[d1]--;
    }
    if(crt!=0){
       cout<<"-1";
       return;
    }
    vector<int> v1;
    for(auto i:m1){
        if(i.second!=0){
            for(int i1=0;i1<abs(i.second)/2;i1++){
                v1.push_back(i.first);
            }
        }
    }
    sort(v1.begin(),v1.end());
   long long int ans=0;
    //cout<<"vector";
    for(int i1=0;i1<v1.size()/2;i1++){
        ans+=min(2*minm,v1[i1]);
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
