/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
 
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
const ll mod = 1000000007;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
vector<ll> primeFactors(ll n)
{
    vector<ll> v;
    while (n%2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
    v.push_back(n);
    return v;
}
ll power(int a,int b){
    ll i=0;
    ll c=1;
    for(i=0;i<b;i++){
        c=c*a;
        c=c%mod;
    }
    return c;
}
 
void solve(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    set<int> s;
    set<int> :: iterator itr;
    int d=0;
    int z1=0;
    for(i=0;i<n-1;i++){
        int diff=arr[i+1]-arr[i];
        if(diff==0){
            z1=1;
        }
        s.insert(diff);
        d=diff;
    }
    if(n==1){
        cout<<"-1";
    }
    else if(s.size()>2){
        cout<<"0";
    }
    else if(s.size()==2){
        if(z1){
            cout<<"0";
            return;
        }
        itr=s.begin();
        int d1=*itr;
        itr++;
        int d2=*itr;
        int f1=0,f2=0;
        int x=0;
        for(i=0;i<n-1;i++){
            int diff=arr[i+1]-arr[i];
            if(diff==d1){
                f1++;
            }
            else{
                f2++;
            }
        }
        if(d1<d2){
            swap(f1,f2);
            swap(d1,d2);
        }
        //cout<<d1<<" "<<d2<<"\n";
        if(f1==1&&d1==2*d2){
            cout<<"1\n";
            for(i=0;i<n-1;i++){
                int diff=arr[i+1]-arr[i];
                if(diff==d1){
                    cout<<arr[i]+d2;
                    break;
                }
            }
        }
        if(f1>1||d1!=2*d2){
            cout<<"0";
        }
    }
    else{
        if(d==0){
            cout<<"1\n";
            cout<<arr[0];
        }
        else if((arr[1]-arr[0])%2==0&&n==2){
            cout<<"3\n";
            cout<<arr[0]-d<<" "<<arr[0]+d/2<<" "<<arr[1]+d;
        }
 
        else{
            cout<<"2\n";
            cout<<arr[0]-d<<" "<<arr[n-1]+d;
        }
    }
 
    return;
}
int main()
{
    IOS;
    int t;
    t=1;//ncin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}