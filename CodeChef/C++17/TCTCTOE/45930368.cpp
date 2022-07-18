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

using namespace std;

ll const INF =1e18;
ll M =1000000007;

char b[3][3];

ll check_x(){
    ll f=0;
    ll i,j;
    ll f1=1;
    for(i=0;i<3;i++){
        if(b[i][i]!='X'){
            f1=0;
        }
    }
    if(f1){
        f=1;
    }

    f1=1;
    for(i=0;i<3;i++){
        if(b[i][2-i]!='X'){
            f1=0;
        }
    }
    if(f1){
        f=1;
    }

    for(i=0;i<3;i++){
        f1=1;
        for(j=0;j<3;j++){
            if(b[i][j]!='X'){
                f1=0;
            }
        }
        if(f1){
            f=1;
        }
    }

    for(i=0;i<3;i++){
        f1=1;
        for(j=0;j<3;j++){
            if(b[j][i]!='X'){
                f1=0;
            }
        }
        if(f1){
            f=1;
        }
    }

    return f;
}

ll check_o(){
    ll f=0;
    ll i,j;
    ll f1=1;
    for(i=0;i<3;i++){
        if(b[i][i]!='O'){
            f1=0;
        }
    }
    if(f1){
        f=1;
    }

    f1=1;
    for(i=0;i<3;i++){
        if(b[i][2-i]!='O'){
            f1=0;
        }
    }
    if(f1){
        f=1;
    }

    for(i=0;i<3;i++){
        f1=1;
        for(j=0;j<3;j++){
            if(b[i][j]!='O'){
                f1=0;
            }
        }
        if(f1){
            f=1;
        }
    }

    for(i=0;i<3;i++){
        f1=1;
        for(j=0;j<3;j++){
            if(b[j][i]!='O'){
                f1=0;
            }
        }
        if(f1){
            f=1;
        }
    }

    return f;
}

void solve()
{
    ll i,j,k,n;
    for(i=0;i<3;i++){
        cin>>b[i];
    }
    ll f=0;
    ll c1=0;
    ll c2=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(b[i][j]=='_'){
                f=1;
            }
            if(b[i][j]=='X'){
                c1++;
            }
            if(b[i][j]=='O'){
                c2++;
            }
        }
    }
    ll x,o;
    x=check_x();
    o=check_o();
    if(c2>c1||c2<c1-1){
        cout<<"3";
        return;
    }

    if(x==1&&o==1){
        cout<<3;
        return;
    }
    if(x==1&&c1==c2){
        cout<<3;
        return;
    }
    if(o==1&&c1!=c2){
        cout<<3;
        return;
    }
    if((x==1&&o==0)||(x==0&&o==1)){
        cout<<"1";
        return;
    }
    if(f==0){
        cout<<"1";
        return;
    }
    cout<<"2";
    return;
}

int main()

{
    //IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
