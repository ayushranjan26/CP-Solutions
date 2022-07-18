/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define rloop(i,a,b) for(int i=(a);i>(b);i--)
#define ft first
#define sd second
ll const INF =1e18;
using namespace std;
 
void solve()
{
    ll i,j,k,q,n,m,a,b,c,y,x,z;
    cin>>a>>b>>k;
    if(k>a+b-2){
        if(a==0&&k==0){
            cout<<"YES\n";
            for(i=0;i<b;i++){
                cout<<'1';
            }
            cout<<endl;
            for(i=0;i<b;i++){
                cout<<'1';
            }
            return;
        }
        if(b==1&&k==0){
            cout<<"YES\n";
            cout<<'1';
            for(i=0;i<a;i++){
                cout<<'0';
            }
            cout<<endl;
            cout<<'1';
            for(i=0;i<a;i++){
                cout<<'0';
            }
            return;
        }
        cout<<"NO";
    }
    else{
        if(b==1&&k!=0){
            cout<<"NO";
            return;
        }
        if(a==0&&k!=0){
            cout<<"NO";
            return;
        }
        cout<<"YES\n";
        string x="",y="";
        for(i=0;i<b-1;i++){
            x+="1";
        }
        for(i=0;i<a+1;i++){
            if(i==0){
                x+="1";
                continue;
            }
            x+="0";
        }
        y=x;
        if(k<=a){
            swap(y[b-1],y[b-1+k]);
        }
        else{
            swap(y[b-1],y[a+b-1]);
            k-=a;
            i=b-2;
            ll cnt=0;
            while(cnt<k){
                swap(y[i],y[i+1]);
                i--;
                cnt++;
            }
        }
        cout<<x<<"\n"<<y;
    }
    return;
}
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}