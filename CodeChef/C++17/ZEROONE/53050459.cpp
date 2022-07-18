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
    int i,j,k,n,c1=0;
    cin>>n;
    vector<int> ve,vo;
    for(i=0;i<n;i++){
        cin>>k;
        if(i%2){
            vo.push_back(k);
            c1+=k;
        }
        else{
            ve.push_back(k);
        }
    }
    sort(ve.rbegin(),ve.rend());
    sort(vo.begin(),vo.end());
    j=0,k=0;
    int ans=0,c0=0;
    for(i=0;i<n;i++){
        if(i%2){
            cout<<vo[k]<<" ";
            c1-=vo[k];
            k++;
        }
        else{
            cout<<ve[j]<<" ";
            c0=ve[j];
            ans+=c0*c1;
            j++;
        }
        //cout<<ans<<"- "<<c1<<" "<<c0<<endl;
    }
    cout<<"\n"<<ans;
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
