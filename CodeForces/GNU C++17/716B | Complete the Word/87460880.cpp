/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
//#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve()
{
    vector<int> v1;
 string s1;
 cin>>s1;
 int n=s1.size(),d1,d2;
 if(n<26){
        cout<<"-1";
        return;
 }
 int a[26]={0},cnt=0;
 for(int i1=0;i1<26;i1++){
        if(s1[i1]=='?'){
            cnt++;
            continue;
        }
        d1=s1[i1]-'A';
       // cout<<d1<<" ";
        a[d1]++;
 }
 
 int ptr1=0,ptr2=26;
 bool flag =true;
 while(ptr2<=n){
           // cout<<"F";
            int cnt2=0;
        for(int i1=0;i1<26;i1++){
            if(a[i1]==1){
                cnt2++;
            }
        }
    //cout<<cnt2<<" "<<cnt<<"\n";
        if(cnt2+cnt==26){
            for(int i1=0;i1<26;i1++){
                if(a[i1]==0){
                    v1.push_back(i1);
                }
            }
            flag =false;
            break;
        }
        if(s1[ptr1]=='?'){
            cnt--;
        }
        if(s1[ptr2]=='?'){
            cnt++;
        }
        if(s1[ptr1]!='?'){
            d1=s1[ptr1]-'A';
            //cout<<d1<<"\n";
            a[d1]--;
        }
        if(s1[ptr2]!='?'){
            d1=s1[ptr2]-'A';
           // cout<<d1<<"\n";
            a[d1]++;
        }
        ptr1++;
        ptr2++;
 }
 if(flag){
        cout<<"-1";
        return;
 }
 for(int i1=0;i1<ptr1;i1++){
        if(s1[i1]=='?'){
            cout<<"A";
            continue;
        }
        cout<<s1[i1];
 }
 for(int i1=ptr1;i1<ptr2;i1++){
            //cout<<endl;
        if(s1[i1]!='?'){
            cout<<s1[i1];
        }
        else{
            char c1='A'+v1.back();
            v1.pop_back();
            cout<<c1;
        }
 }
 for(int i1=ptr2;i1<n;i1++){
        if(s1[i1]=='?'){
            cout<<"A";
            continue;
        }
        cout<<s1[i1];
 }
 return;
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