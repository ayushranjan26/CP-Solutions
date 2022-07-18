#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    int arr[m];
    if(m%2==1){
        arr[0]=(m+1)/2;
        j=1,i=1;
        while(i<=m/2){
            if(j%2==1){
                arr[j]=(m+1)/2-i;
            }
            else{
                arr[j]=(m+1)/2+i;
                i++;
            }
            j++;
        }
 
    }
    else{
        j=0,i=0;
        while(i<=m/2){
            if(j%2==0){
                arr[j]=(m+1)/2-i;
                i++;
            }
            else{
                arr[j]=(m+1)/2+i;
            }
            j++;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[(i%m)]<<"\n";
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        //cout<<"\n";
        cout<<endl;
        tc++;
    }
    return 0;
}