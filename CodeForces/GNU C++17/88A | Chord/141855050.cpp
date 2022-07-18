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
    int i,j,k,n;
    n=12;
    string s[12]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
    string a[3];
    cin>>a[0]>>a[1]>>a[2];
    int idx=0;
    for(i=0;i<n;i++){
        if(a[0]==s[i]){
            idx=i;
            break;
        }
    }
    if(a[1]==s[(idx+3)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"minor";
        return;
    }
    if(a[1]==s[(idx+4)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"major";
        return;
    }
 
    swap(a[2],a[1]);
    idx=0;
    for(i=0;i<n;i++){
        if(a[0]==s[i]){
            idx=i;
            break;
        }
    }
    if(a[1]==s[(idx+3)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"minor";
        return;
    }
    if(a[1]==s[(idx+4)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"major";
        return;
    }
    swap(a[2],a[1]);
 
    swap(a[0],a[1]);
    idx=0;
    for(i=0;i<n;i++){
        if(a[0]==s[i]){
            idx=i;
            break;
        }
    }
    if(a[1]==s[(idx+3)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"minor";
        return;
    }
    if(a[1]==s[(idx+4)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"major";
        return;
    }
    swap(a[0],a[1]);
 
    swap(a[0],a[1]);
    swap(a[1],a[2]);
    idx=0;
    for(i=0;i<n;i++){
        if(a[0]==s[i]){
            idx=i;
            break;
        }
    }
    if(a[1]==s[(idx+3)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"minor";
        return;
    }
    if(a[1]==s[(idx+4)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"major";
        return;
    }
    swap(a[1],a[2]);
    swap(a[0],a[1]);
 
    swap(a[0],a[1]);
    swap(a[1],a[2]);
    idx=0;
    for(i=0;i<n;i++){
        if(a[0]==s[i]){
            idx=i;
            break;
        }
    }
    if(a[1]==s[(idx+3)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"minor";
        return;
    }
    if(a[1]==s[(idx+4)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"major";
        return;
    }
    swap(a[1],a[2]);
    swap(a[0],a[1]);
 
    swap(a[0],a[2]);
    idx=0;
    for(i=0;i<n;i++){
        if(a[0]==s[i]){
            idx=i;
            break;
        }
    }
    if(a[1]==s[(idx+3)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"minor";
        return;
    }
    if(a[1]==s[(idx+4)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"major";
        return;
    }
    swap(a[0],a[2]);
 
    swap(a[0],a[2]);
    swap(a[1],a[2]);
    idx=0;
    for(i=0;i<n;i++){
        if(a[0]==s[i]){
            idx=i;
            break;
        }
    }
    if(a[1]==s[(idx+3)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"minor";
        return;
    }
    if(a[1]==s[(idx+4)%12]&&a[2]==s[(idx+7)%12]){
        cout<<"major";
        return;
    }
    swap(a[1],a[2]);
    swap(a[0],a[2]);
 
    cout<<"strange";
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}