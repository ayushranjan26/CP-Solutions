#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
vector<pii> f(int x,int y,int a,int b){
    vector<pii> res;
    int x1=x-a,y1=y-b;
    res.push_back({x1+a,y1+b});
    swap(x1,y1);
    x1*=(-1);
    res.push_back({x1+a,y1+b});
    swap(x1,y1);
    x1*=(-1);
    res.push_back({x1+a,y1+b});
    swap(x1,y1);
    x1*=(-1);
    res.push_back({x1+a,y1+b});
    return res;
}
 
int squareDist(pii p, pii q) {
   return (p.ft - q.ft)*(p.ft - q.ft) + (p.sd - q.sd)*(p.sd - q.sd);
}
 
bool isSquare(pii p1, pii p2, pii p3, pii p4) {    //check four points are forming square or not
    set<pii> st;
    st.insert(p1);
    st.insert(p2);
    st.insert(p3);
    st.insert(p4);
    if(st.size()!=4){
        return  false;
    }
   int dist12 = squareDist(p1, p2);     // distance from p1 to p2
   int dist13 = squareDist(p1, p3);     // distance from p1 to p3
   int dist14 = squareDist(p1, p4);     // distance from p1 to p4
 
   //when length of p1-p2 and p1-p3 are same, and square of (p1-p4) = 2*(p1-p2)
   if (dist12 == dist13 && 2*dist12 == dist14) {
      int dist = squareDist(p2, p4);
      return (dist == squareDist(p3, p4) && dist == dist12);
   }
 
   //same condition for all other combinations
   if (dist13 == dist14 && 2*dist13 == dist12) {
      int dist = squareDist(p2, p3);
      return (dist == squareDist(p2, p4) && dist == dist13);
   }
 
   if (dist12 == dist14 && 2*dist12 == dist13) {
      int dist = squareDist(p2, p3);
      return (dist == squareDist(p3, p4) && dist == dist12);
  }
  return false;
}
 
void solve(){
    int i,j,k,l,x,y,a,b;
    vector<pii> v[4];
    cin>>x>>y>>a>>b;
    v[0]=f(x,y,a,b);
    cin>>x>>y>>a>>b;
    v[1]=f(x,y,a,b);
    cin>>x>>y>>a>>b;
    v[2]=f(x,y,a,b);
    cin>>x>>y>>a>>b;
    v[3]=f(x,y,a,b);
    int res=100;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                for(l=0;l<4;l++){
                    if(isSquare(v[0][i],v[1][j],v[2][k],v[3][l])){
                        res=min(res,i+j+k+l);
 
                    }
                }
            }
        }
    }
    if(res==100){
        res=-1;
    }
    cout<<res;
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}