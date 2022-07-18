#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;
//DSU
vector<int> p(3003);//vector to store the parent

void make_set(int v){//initialize the set
    p[v]=v;
}

int find_set(int v){//find the set whom v belongs to
    if(p[v]==v){
        return v;
    }
    p[v]=find_set(p[v]);
    return p[v];
}

void union_set(int a,int b){//merging the two set
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        p[b]=a;
    }
}

int circle(int x1, int y1, int x2,
           int y2, int r1, int r2)
{
    int distSq = (x1 - x2) * (x1 - x2) +
                 (y1 - y2) * (y1 - y2);
    int radSumSq = (r1 + r2) * (r1 + r2);
    int radSumSq2=(r1 - r2) * (r1 - r2);
    //cout<<distSq<<" - "<<radSumSq2<<" - "<<radSumSq<<endl;
    if(distSq>=radSumSq2&&distSq<=radSumSq){
        return 1;
    }
    else{
        return -1;
    }
}

void solve(){
    int i,j,n;
    cin>>n;
    int sx,sy,tx,ty;
    cin>>sx>>sy>>tx>>ty;
    int x[n],y[n],r[n];
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i]>>r[i];
    }
    for(i=0;i<n;i++){
        make_set(i);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(circle(x[i],y[i],x[j],y[j],r[i],r[j])>=0){
                //cout<<i<<" "<<j<<endl;
                union_set(i,j);
            }
        }
    }
    vector<int> a1,a2;
    for(i=0;i<n;i++){
        int d=(sx-x[i])*(sx-x[i])+(sy-y[i])*(sy-y[i]);
        if(d==r[i]*r[i]){
            a1.push_back(i);
        }
        d=(tx-x[i])*(tx-x[i])+(ty-y[i])*(ty-y[i]);
        if(d==r[i]*r[i]){
            a2.push_back(i);
        }
    }
    for(i=0;i<a1.size();i++){
        for(j=0;j<a2.size();j++){
            if(find_set(a1[i])==find_set(a2[j])){
                cout<<"Yes";
               // cout<<" "<<a1[i]<<" "<<a2[i]<<endl;
                return;
            }
        }
    }
    cout<<"No";
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
