#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
void solve(){
    int i,j,k,n,m,n1,m1;
    cin>>n>>m>>k;
    n1=n,m1=m;
    char mat[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            mat[i][j]='.';
        }
    }
    if(n%2==1){
        k-=m/2;
        j=0;
        for(i=0;i<m;i+=2){
            mat[n-1][i]=(char)('a'+j);
            mat[n-1][i+1]=(char)('a'+j);
            j++;
            j%=26;
        }
        n--;
    }
    if(k<0){
        cout<<"NO\n";
        return;
    }
    if(m%2==1){
        j=0;
        for(i=0;i<n;i+=2){
            mat[i+1][m-1]=(char)('a'+j);
            mat[i][m-1]=(char)('a'+j);
            j++;
            j%=26;
        }
        m--;
    }
    if(k%2==0&&2*k<=n*m){
        cout<<"YES\n";
        int cnt_k=0;
        int k1=0;
        for(j=0;j<m;j+=2){
            for(i=0;i<n;i++){
                char c1=(char)('a'+k1);
                if(cnt_k==k){
                    break;
                }
                if(i==0&&j!=0&&c1==mat[i][j-1]){
                    k1++;
                    k1%=26;
                    c1=(char)('a'+k1);
                }
                if(i==n-1&&n!=n1&&c1==mat[n1-1][j]){
                    k1++;
                    k1%=26;
                    c1=(char)('a'+k1);
                }
                if(j==m-2&&m!=m1&&c1==mat[i][m1-1]){
                    k1++;
                    k1%=26;
                    c1=(char)('a'+k1);
                }
                mat[i][j]=c1;
                mat[i][j+1]=c1;
                cnt_k++;
                k1++;
                k1%=26;
            }
            if(cnt_k==k){
                break;
            }
        }
        k1=0;
        //cout<<cnt_k<<"\n";
        for(j=0;j<m1;j++){
            for(i=0;i<n1;i++){
                char c1=(char)('a'+k1);
                if(mat[i][j]=='.'){
                    //cout<<i<<" "<<j<<" "<<c1<<"\n";
                    if(i>0&&c1==mat[i-1][j]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    if(i+2<n1&&c1==mat[i+2][j]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    if(j>0&&c1==mat[i][j-1]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    if(j+1<m1&&c1==mat[i][j+1]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    if(j>0&&c1==mat[i+1][j-1]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    if(j+1<m1&&c1==mat[i+1][j+1]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    if(i>0&&c1==mat[i-1][j]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    if(i+2<n1&&c1==mat[i+2][j]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    if(j>0&&c1==mat[i][j-1]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    if(j+1<m1&&c1==mat[i][j+1]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    if(j>0&&c1==mat[i+1][j-1]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    if(j+1<m1&&c1==mat[i+1][j+1]){
                        //cout<<i<<" "<<j<<endl;
                        k1++;
                        k1%=26;
                        c1=(char)('a'+k1);
                        //c1='&';
                    }
                    mat[i][j]=c1;
                    mat[i+1][j]=c1;
                    k1++;
                    k1%=26;
                }
            }
        }
        for(i=0;i<n1;i++){
            for(j=0;j<m1;j++){
                cout<<mat[i][j];
            }
            cout<<endl;
        }
        return;
    }
    cout<<"NO\n";
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        //cout<<endl;
        tc++;
    }
    return 0;
}