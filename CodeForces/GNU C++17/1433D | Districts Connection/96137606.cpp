/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
//-24 -14
//4 1 24 27 13 1
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
void solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        b[i1]=a[i1];
    }
    sort(b,b+n);
    if(b[0]==b[n-1]){
        cout<<"NO";
        return;
    }
    else{
        cout<<"YES\n";
        vector<int > v;
        vector<int> v2;
        for(int i1=0;i1<n;i1++){
            if(a[i1]==b[0]){
                v.push_back(i1);
            }
 
        }
        int x;
        for(int i1=1;i1<n;i1++){
            if(b[i1]>b[i1-1]){
                x=b[i1];
                break;
            }
        }
         for(int i1=0;i1<n;i1++){
            if(a[i1]==b[0]){
                v.push_back(i1);
            }
            if(a[i1]==x){
                v2.push_back(i1);
            }
        }
 
        for(int i1=0;i1<n;i1++){
                //cout<<i1;
            if(a[i1]==b[0]){
                cout<<i1+1<<" "<<v2[0]+1<<"\n";
            }
            else if(a[i1]==x&&i1==v2[0]){
                continue;
            }
            else if(a[i1]==x){
                cout<<i1+1<<" "<<v[0]+1<<"\n";
            }
            else{
                cout<<i1+1<<" "<<v2[0]+1<<"\n";
            }
        }
 
 
    }
 
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}