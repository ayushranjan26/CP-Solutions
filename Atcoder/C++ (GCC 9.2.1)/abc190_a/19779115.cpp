/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
#define IOS cin.tie(NULL);cout.tie(NULL)
using namespace std;

const int mod = 1000000007;

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
int freq[3];
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i1=0;i1<s.size();i1++){
        int d=(int)(s[i1]-'0');
        freq[d%3]++;
    }
    int sum=freq[1]+freq[2]*2;
    if(sum%3==0){
        cout<<"0";
        return;
    }

    if(sum%3==1&&freq[1]!=0&&n>1){
        cout<<"1";
        return;
    }
    if(sum%3==1&&freq[2]>=2&&n>2){
        cout<<"2";
        return;
    }
    if(sum%3==1&&freq[0]!=0){
        cout<<n-freq[0];
        return;
    }
    if(sum%3==2&&freq[2]!=0&&n>1){
        cout<<"1";
        return;
    }
    if(sum%3==2&&freq[1]>=2&&n>2){
        cout<<"2";
        return;
    }
    if(sum%3==2&&freq[0]!=0){
        cout<<"1";
        return;
    }
    cout<<"-1";
    return;
}
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
