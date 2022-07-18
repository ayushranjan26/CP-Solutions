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
    int n,x,p,k;
    cin>>n>>x>>p>>k;
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    sort(a,a+n);
    p--,k--;
    if(a[p]==x){
        cout<<"0";
        return;
    }
    if(p==k){
        a[p]=x;
        int c1=-1;
        sort(a,a+n);
        for(int i1=0;i1<n;i1++){
            if(a[i1]==x){
                c1=i1;
                if(i1>=p){
                    break;
                }
            }
        }
        int ans=abs(p-c1)+1;
        cout<<ans;
    }


    if(p<k){
        if(a[p]<x){
            cout<<"-1";
            return;
        }
        int c1=-1;
        a[k]=x;
        sort(a,a+n);
        for(int i1=0;i1<=p;i1++){
            if(a[i1]==x){
                c1=i1;
            }
        }
        if(c1>=0){
            int ans=p-c1+1;
            cout<<ans;
            return;
        }
    }
    if(p>k){
        if(a[p]>x){
            cout<<"-1";
            return;
        }
        int c1=-1;
        a[k]=x;
        sort(a,a+n);
        for(int i1=n-1;i1>=p;i1--){
            if(a[i1]==x){
                c1=i1;
            }
        }
        if(c1>=0){
            int ans=c1-p+1;
            cout<<ans;
            return;
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
