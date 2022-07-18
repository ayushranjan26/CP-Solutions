#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j;
    string a,s;
    cin>>a>>s;
    bool f=true;
    i=a.size()-1;
    j=s.size()-1;
    vector<int> v;
    while(i>=0&&j>=0){
        int a1,s1;
        string sj,ai;
        sj=s[j];
        ai=a[i];
        a1=stoi(ai);
        s1=stoi(sj);
        if(a1>s1){
            if(j>0&&s[j-1]=='1'){
                v.push_back(s1+10-a1);
                j-=2;
                i--;
            }
            else{
                cout<<"-1";
                return;
            }
        }
        else{
            v.push_back(s1-a1);
            i--,j--;
        }
    }
    if(i>=0){
        cout<<"-1";
        return;
    }
    while(j>=0){
        int s1;
        string sj;
        sj=s[j];
        s1=stoi(sj);
        v.push_back(s1);
        j--;
    }
    //cout<<i<<" "<<j<<endl;
    reverse(v.begin(),v.end());
    f=true;
    for(i=0;i<v.size();i++){
        if(v[i]==0&&i!=v.size()-1&&f){
            continue;
        }
        f=false;
        cout<<v[i];
    }
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