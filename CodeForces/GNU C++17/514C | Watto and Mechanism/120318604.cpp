#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll const INF =1e18;
ll M =1000000007;
 
const int Mod1=1187278649;
const int Mod2=1149736019;
ll compute_Hash(string &s,int Mod){
 ll hash_value=0;
 ll p_pow=1;
 ll p=3;
 for(char c:s){
  hash_value=(hash_value+(c-'a'+1)*p_pow)%Mod;
  p_pow=(p_pow*p)%Mod;
 }
 return hash_value;
}
 
void solve()
{
    int i,j,k,n,m;
    string s;
    cin>>n>>m;
    set<pair<ll,ll>> st;
    for(i=0;i<n;i++){
        cin>>s;
        st.insert({compute_Hash(s,Mod1),compute_Hash(s,Mod2)});
    }
 
    for(i=0;i<m;i++){
        cin>>s;
        bool ok=false;
        ll h1=compute_Hash(s,Mod1);
  ll h2=compute_Hash(s,Mod2);
  ll p_pow1=1;
  ll p_pow2=1;
  for(int j=0;j<s.size();j++){
   for(int k=0;k<3;k++){
    if(k==s[j]-'a')continue;
    ll Hash1_val=h1-(s[j]-'a'+1)*p_pow1+(k+1)*p_pow1;
    while(Hash1_val<0)Hash1_val+=Mod1;
    Hash1_val%=Mod1;
    ll Hash2_val=h2-(s[j]-'a'+1)*p_pow2+(k+1)*p_pow2;
    while(Hash2_val<0)Hash2_val+=Mod2;
    Hash2_val%=Mod2;
    if(st.find({Hash1_val,Hash2_val})!=st.end()){
     ok=true;
     break;
    }
   }
   if(ok)break;
   p_pow1=(p_pow1*3)%Mod1;
   p_pow2=(p_pow2*3)%Mod2;
  }
  if(ok)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
    }
    return;
}
 
int main(){
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
/*
1 5
acbacbacb
cbacbacb
acbacbac
aacbacbacb
acbacbacbb
acbaabacb
*/