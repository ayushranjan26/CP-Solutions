/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
void solve(){
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int sum=r1+r2;
    int ans1,ans2,ans3,ans4;
    ans1=(r1+c1+d1-sum)/2;
    ans2=r1-ans1;
    ans3=c1-ans1;
    ans4=c2-ans2;
    if(ans1<1||ans2<1||ans3<1||ans4<1||ans1==ans2||ans3==ans4||ans1==ans3||ans1==ans4||ans2==ans3||ans2==ans4){
        cout<<"-1";
        return;
    }
    if(ans1+ans4!=d1||d2!=ans3+ans2||ans3+ans4!=r2||ans1>9||ans2>9||ans3>9||ans4>9){
        cout<<"-1";
        return;
    }
    cout<<ans1<<" "<<ans2<<"\n"<<ans3<<" "<<ans4;
 
    return;
}
 
int main()
{
  //  ios::sync_with_stdio(0);
 //   cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}