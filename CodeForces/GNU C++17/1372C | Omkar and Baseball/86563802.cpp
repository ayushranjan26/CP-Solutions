/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        a[i1]--;
    }
    vector<int> v1;
    for(int i1=0;i1<n;i1++){
        if(a[i1]!=i1){
            v1.push_back(i1);
        }
    }
    if(v1.empty()){
        cout<<"0";
    }
    else{
            int bdry=1;
        for(int i1=0;i1<v1.size()-1;i1++){
            if(v1[i1]+1!=v1[i1+1]){
                bdry++;
            }
        }
        if(bdry==1){
            cout<<"1";
        }
        if(bdry!=1){
            cout<<"2";
        }
    }
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