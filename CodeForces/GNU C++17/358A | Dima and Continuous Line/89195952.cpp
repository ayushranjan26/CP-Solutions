/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
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
    }
    for(int i1=0;i1<n-1;i1++){
        for(int i2=0;i2<n-1;i2++){
            int x1=max(a[i1],a[i1+1]),x2=min(a[i1],a[i1+1]),y1=max(a[i2],a[i2+1]),y2=min(a[i2],a[i2+1]);
            swap(x1,x2);
            swap(y1,y2);
            if(y1>=x1&&y1<=x2&&y2>=x1&&y2<=x2){
 
            }
            else if(y1<=x1&&y2>=x2){
 
            }
            else if(y1<=x1&&y2<=x1){
 
            }
            else if(y1>=x2&&y2>=x2){
 
            }
            else{
                //cout<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<endl;
                cout<<"yes";
                return;
            }
        }
    }
    cout<<"no";
    return;
}
 
int main()
{
 //   ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}