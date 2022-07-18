#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  t=1;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    int nst=1,nsp=1,mx=0,mxp=0,d1=0,d2=0,d3=0;;
    stack<int> s;
    for(int i1=0;i1<n;i1++){
        if(s.empty()){
            d3=i1+1;
        }
        if(a[i1]==1){
            s.push(1);
            d2++;
            d1++;
        }
        if(d2>nst){
            nst=d2;
            nsp=i1+1;
        }
        if(a[i1]==2){
            s.pop();
            d2--;
        }
        if(s.empty()){

                if(d1>mx){
                    mx=d1;
                    mxp=d3;
                }
                d1=0;
        }
        //cout<<s.size()<<" "<<mx<<endl;
        //cout<<nst<<" "<<nsp<<" "<<2*mx<<" "<<mxp<<endl;
    }
    cout<<nst<<" "<<nsp<<" "<<2*mx<<" "<<mxp;
  }
  return 0;
}
