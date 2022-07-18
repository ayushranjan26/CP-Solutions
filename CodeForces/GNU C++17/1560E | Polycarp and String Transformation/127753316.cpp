#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e4+5;
const int INF=1e18;
 
void solve(int tc){
    int i,j,k,n,i1;
    string t;
    cin>>t;
    n=t.size();
    int f[26]={0};
    for(i=0;i<n;i++){
        f[(int)(t[i]-'a')]++;
    }
    int pref[26]={0};
    string ans="";
    vector<int> v;
    for(i=0;i<n;i++){
        ans+=t[i];
        pref[(int)(t[i]-'a')]++;
        v.clear();
        for(j=0;j<26;j++){
            int d=f[j]-pref[j];
            if(pref[j]!=0){
                if(d%pref[j]==0){
                    v.push_back(d/pref[j]);
                }
                else{
                    v.push_back(-1);
                }
            }
        }
        sort(v.begin(),v.end());
        if(v[0]!=-1){
            bool chk=true;
            for(j=0;j<v.size();j++){
                if(v[j]!=j){
                    chk=false;
                }
            }
            if(chk){
                v[0]=-2;
            }
        }
        if(v[0]==-2){
            string ans2="",anss=ans;
            int f2[26]={0};
            for(i1=0;i1<n;i1++){
                f2[(int)(t[i1]-'a')]++;
            }
            int pref2[26]={0};
            for(i1=0;i1<n;i1++){
                pref2[(int)(t[i1]-'a')]++;
                for(j=0;j<26;j++){
                    if(pref2[j]==f2[j]&&f2[j]!=0){
                        ans2+=(char)('a'+j);
                        f2[j]=0;
                        break;
                    }
                }
            }
            string t1="",ans3=ans;
            for(i1=0;i1<ans2.size();i1++){
                t1+=ans;
                string temp;
                for(j=0;j<ans.size();j++){
                    if(ans[j]!=ans2[i1]){
                        temp+=ans[j];
                    }
                }
                //cout<<temp<<"\n";
                ans=temp;
            }
            if(t1==t){
                cout<<ans3<<" "<<ans2;
                return;
            }
            ans=anss;
        }
    }
    cout<<"-1";
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve(tc);
        cout<<"\n";
        tc++;
    }
    return 0;
}