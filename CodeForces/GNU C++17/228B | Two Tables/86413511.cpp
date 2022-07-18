/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int na,ma,nb,mb;
    cin>>na>>ma;
    int a[na][ma];
    for(int i1=0;i1<na;i1++){
        string s1;
        cin>>s1;
        for(int i2=0;i2<ma;i2++){
            if(s1[i2]=='1'){
                a[i1][i2]=1;
            }
            else{
                a[i1][i2]=0;
            }
        }
    }
    cin>>nb>>mb;
    int b[nb][mb];
    for(int i1=0;i1<nb;i1++){
        string s1;
        cin>>s1;
        for(int i2=0;i2<mb;i2++){
            if(s1[i2]=='1'){
                b[i1][i2]=1;
            }
            else{
                b[i1][i2]=0;
            }
        }
    }
    vector<pair<int,pair<int ,int > > > v1;
    for(int x=-50;x<50;x++){
        for(int y=-50;y<50;y++){
            int sum=0;
            for(int i=0;i<na;i++){
                if(i+x>=0&&i+x<nb){
                        //cout<<"fgff "<<i;
                    for(int j=0;j<ma;j++){
                        if(j+y>=0&&j+y<mb){
                            sum+=a[i][j]*b[i+x][j+y];
                        }
                    }
                }
            }
           // cout<<sum<<"-"<<x<<" "<<y<<endl;;
            v1.push_back(make_pair(sum,make_pair(x,y)));
        }
    }
    sort(v1.begin(),v1.end());
    cout<<v1[v1.size()-1].second.first<<" "<<v1[v1.size()-1].second.second;
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}