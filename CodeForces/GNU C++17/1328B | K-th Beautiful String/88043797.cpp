    /*WELCOME TO AYUSH RANJAN CODE'S*/
    /*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
 
    int chkpower2(int x){
        return (x&&!(x&x-1));
    }
 
    //int a[100001][2];
    void solve(){
        ll n,k,d1,d2,d3;
        cin>>n>>k;
        ll sum=0,i=1,j=0,i1=0;
        while(1){
            sum+=i;
            if(sum>=k){
                break;
            }
            i++;
        }
        j=k-((i)*(i-1))/2-1;
        i=n-i-1;
        j=n-j-1;
        for(i1=0;i1<n;i1++){
            if(i1==i||i1==j){
                cout<<'b';
            }
            else{
                cout<<'a';
            }
        }
        return;
    }
 
    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
 
        int t;
        cin>>t;
        while(t--){
            solve();
            cout<<"\n";
        }
        return 0;
    }