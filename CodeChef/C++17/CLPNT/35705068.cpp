/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}


void solve(){
    int n,q;
    cin>>n;
    vector<ll> a(n);
    map<int,int> m1;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        m1[a[i1]]=1;
    }

    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        x=x+y;
        if(m1.find(x)!=m1.end()){
            cout<<"-1\n";
        }
        else{
            cout<<upper_bound(a.begin(),a.end(),x)-a.begin()<<"\n";
        }
    }

    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
