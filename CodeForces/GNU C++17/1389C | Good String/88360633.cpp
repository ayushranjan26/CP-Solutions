/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    string s1;
    cin>>s1;
    int a[10]={0};
    for(int i1=0;i1<s1.size();i1++){
        int d1=s1[i1]-'0';
        a[d1]++;
    }
    int m1=0;
    for(int i1=0;i1<10;i1++){
        m1=max(m1,a[i1]);
    }
    int ans=s1.size()-m1;
    string s3="",s4="";
    for(int i1=1;i1<s1.size();i1++){
        s3+=s1[i1];
    }
    s3+=s1[0];
    s4+=s1[s1.size()-1];
    for(int i1=0;i1<s1.size()-1;i1++){
        s4+=s1[i1];
    }
 
    for(int i1=0;i1<10;i1++){
        for(int i2=0;i2<10;i2++){
                vector<int> v1;
                bool flag=true;
            for(int i=0;i<s1.size();i++){
                int d1;
                d1=s1[i]-'0';
                if(d1==i1&&flag){
                    v1.push_back(d1);
                    flag=false;
                }
                else if(d1==i2&&flag==false){
                    v1.push_back(d1);
                    flag=true;
                }
            }
            int d1=s1.size()-v1.size();
            if(v1.size()%2==0)
                ans=min(ans,d1);
 
 
            v1.clear();
        }
    }
    if(s3==s4){
        cout<<"0";
        return;
    }
    else{
        int d1=s1.size()-2;
        ans=min(d1,ans);
        cout<<ans;
    }
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
   // cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}