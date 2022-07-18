#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

string s;
char give(int k,char c,int t){
     string s1="";
     //cout<<k<<" ";
     while(k){
        if(k%2==1){
            s1+='1';
        }
        else{
            s1+='0';
        }
        k/=2;
        t--;
     }
     int d=t%3;
     if(c=='A'){
        if(d==1){
            c='B';
        }
        if(d==2){
            c='C';
        }
     }
     else if(c=='B'){
        if(d==1){
            c='C';
        }
        if(d==2){
            c='A';
        }
     }
     else{
        if(d==1){
            c='A';
        }
        if(d==2){
            c='B';
        }
     }
     //cout<<c<<" "<<s1<<endl;
     for(int i=(int)s1.size()-1;i>=0;i--){
        if(s1[i]=='0'){
            if(c=='A'){
                c='B';
            }
            else if(c=='B'){
                c='C';
            }
            else{
                c='A';
            }
        }
        else{
            if(c=='A'){
                c='C';
            }
            else if(c=='B'){
                c='A';
            }
            else{
                c='B';
            }
        }
     }
     return c;
}
char calc(int t,int k){
    if(t==0){
        return s[k];
    }
    int n=1,temp=t,tk=k,i;
    bool flg=false;
    while(t--){
        n=n*2;
        if(n>k){
            flg=true;
            break;
        }
    }
    if(flg){
        //cout<<"f \n";
        return give(k,s[0],temp);
    }
    int idx=k/n;
    idx++;
    k-=n*(idx-1);

    idx--;
    /*(for(i=0;i<s.size();i++){
        k-=n;
        idx=i;
        if(k<0){
            k+=n;
            break;
        }
    }*/
    return give(k,s[idx],temp);
}

void solve(){
    int i,j,q;
    cin>>s;
    cin>>q;
    while(q--){
        int t,k;
        cin>>t>>k;
        cout<<calc(t,k-1)<<"\n";
    }
    return;
}

int32_t main(){
    IOS;
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
