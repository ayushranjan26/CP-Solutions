/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    long long int n;
    cin>>n;
    string s1=to_string(n);
    if(s1.size()%2==1){
        for(int i1=0;i1<s1.size()/2+1;i1++){
            cout<<"4";
        }
        for(int i1=0;i1<s1.size()/2+1;i1++){
            cout<<"7";
        }
    }
    else{
       long long int a[5][2];
        a[0][0]=47,a[0][1]=74;
        a[1][0]=4477,a[1][1]=7744;
        a[2][0]=444777,a[2][1]=777444;
        a[3][0]=44447777,a[3][1]=77774444;
        a[4][0]=4444477777,a[4][1]=7777744444;
        int d1=s1.size()/2-1;
        if(n<=a[d1][0]||n>a[d1][1]){
            //cout<<d1<<" ";
            if(n<=a[d1][0]){
                cout<<a[d1][0];
                return;
            }
            if(n>a[d1][1]){
                //cout<<d1+1<<" ";
                cout<<a[d1+1][0];
                return;
            }
        }
        int cnt7=s1.size()/2,cnt4=s1.size()/2;
 
        int ans[s1.size()],i;
        bool flag=true;
        for(int i1=0;i1<s1.size();i1++){
            d1=(int)s1[i1]-48;
            //cout<<cnt4<<" "<<cnt7<<endl;
            if(d1<=4&&cnt4>0){
                //cout<<4<<endl;
                ans[i1]=4;
                cnt4--;
                if(d1<4){
                    flag=false;
                    i=i1;
                    break;
                }
                continue;
            }
           else if(cnt7>0&&d1<=7){
                   // cout<<7<<endl;
                ans[i1]=7;
                cnt7--;
                if(d1<7){
                    flag=false;
                    i=i1;
                    break;
                }
                continue;
            }
 
            else{
                for(int i2=i1-1;i2>=0;i2--){
                    if(ans[i2]==4){
                        ans[i2]=7;
                        cnt4++;
                        cnt7--;
                        i=i2;
                        flag=false;
                        break;
                    }
                }
                break;
            }
        }
        if(flag==false){
        for(int i1=i+1;i1<s1.size();i1++){
            if(cnt4){
                ans[i1]=4;
                cnt4--;
            }
            else{
                ans[i1]=7;
            }
        }}
        //cout<<endl;
        for(int i1=0;i1<s1.size();i1++){
            cout<<ans[i1];
        }
    }
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