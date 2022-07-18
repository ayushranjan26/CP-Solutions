/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
using namespace std;
int chkpower2(int x){
    return (x&&!(x&x-1));
}

void solve(){
    int n,cp=0,mp=0;
    cin>>n;
    for(int i1=0;i1<n;i1++){
        int a=0,b=0;
        string s1,s2;
        cin>>s1>>s2;
        for(int i1=0;i1<s1.size();i1++){
            a+=(int)s1[i1]-48;
        }
        for(int i1=0;i1<s2.size();i1++){
            b+=(int)s2[i1]-48;
        }
      //  cout<<a<<" "<<b<<"\n";
        if(a>b){
            cp++;
        }
        if(b>a){
            mp++;
        }
        if(a==b){
            mp++;
            cp++;
        }
    }
    if(cp>mp){
        cout<<"0 "<<cp;
    }
    if(mp>cp){
        cout<<"1 "<<mp;
    }
    if(cp==mp){
        cout<<"2 "<<mp;
    }
    return;
}

int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
