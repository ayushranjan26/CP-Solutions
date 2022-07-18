/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define rloop(i,a,b) for(int i=(a);i>(b);i--)
#define ft first
#define sd second
 
using namespace std;
 
void solve()
{
    ll i,j,k,q,n,a,b,c,y,x,p,z;
    cin>>n;
    ll arr[n];
    ll arr2[n];
    ll ma=0;
    j=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    for(i=1;i<n;i++){
        arr[i]=max(arr[i-1],arr2[i]);
        //cout<<arr[i]<<" ";
    }
    stack<ll> st;
    for(i=n-1;i>=0;i--){
        if(arr2[i]==arr[i]){
            st.push(arr2[i]);
            while(!st.empty()){
                cout<<st.top()<<" ";
                st.pop();
            }
        }
        else{
            st.push(arr2[i]);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return;
}
int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}