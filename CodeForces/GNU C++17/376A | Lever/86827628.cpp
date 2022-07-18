/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    string s1;
    cin>>s1;
    bool flag =true;
    for(int i1=0;i1<s1.size();i1++){
        if((int)s1[i1]-48<=9&&(int)s1[i1]-48>=1){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"balance";
        return;
    }
   long long int ans1=0,i=0,ans2=0;
    vector<pair<long long int,long long int> > v1,v2;
    for(int i1=0;i1<s1.size();i1++){
        if(s1[i1]=='^'){
            i=i1;
            break;
        }
        if(s1[i1]!='='){
            int d1=s1[i1]-48;
            v1.push_back(make_pair(d1,i1));
        }
    }
    for(int i1=i+1;i1<s1.size();i1++){
        if(s1[i1]!='='){
            int d1=s1[i1]-48;
            v2.push_back(make_pair(d1,i1));
        }
    }
    for(int i1=0;i1<v1.size();i1++){
        ans1+=v1[i1].first*(i-v1[i1].second);
    }
    for(int i1=0;i1<v2.size();i1++){
        ans2+=v2[i1].first*(v2[i1].second-i);
    }
    if(ans2==ans1){
        cout<<"balance";
    }
    if(ans1>ans2){
        cout<<"left";
    }
    if(ans1<ans2){
        cout<<"right";
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