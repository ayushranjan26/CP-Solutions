 #include <bits/stdc++.h>

#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

struct seven{
    int n1,d1,n2,d2;
};
bool cmp(seven &p,seven &q){
    return (p.n2*q.d2)<(p.d2*q.n2);
}
void solve(){
    int i,j,n;
    cin>>n;
    vector<seven> v(n);
    for(i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v[i].n1=y-1;
        v[i].d1=x;
        v[i].n2=y;
        v[i].d2=x-1;
    }
    sort(v.begin(),v.end(),cmp);
    int tot=0;
    int num=v[0].n1,den=v[0].d1;
    for(i=0;i<n;i++){
        if(num*v[i].d1<=den*v[i].n1){
            tot++;
            num=v[i].n2;
            den=v[i].d2;
        }
    }
    cout<<tot;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
