    /*WELCOME TO AYUSH RANJAN CODE'S*/
    /*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
 
    int chkpower2(int x){
        return (x&&!(x&x-1));
    }
 
 
    void solve(){
        int n,k;
        cin>>n>>k;
        int time=240-k;
        int timesum=0;
        int ans=0;
        for(int i1=1;i1<=n;i1++){
            timesum+=5*i1;
            ans=i1;
            if(timesum>time){
                ans--;
                break;
            }
        }
        cout<<ans;
        return;
    }
 
    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
 
        int t;
        t=1;//cin>>t;
        while(t--){
            solve();
            cout<<"\n";
        }
        return 0;
    }