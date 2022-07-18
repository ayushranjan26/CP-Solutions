    /*WELCOME TO AYUSH RANJAN CODE'S*/
    /*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
 
    int chkpower2(int x){
        return (x&&!(x&x-1));
    }
 
 
    void solve(){
        ll n,k,d1,d2,d3,ans=0;
        cin>>n;
        vector<int> a(n),b(n);
        vector<int> diff(n);
        for(int i1=0;i1<n;i1++){
            cin>>a[i1];
        }
        for(int i1=0;i1<n;i1++){
            cin>>b[i1];
        }
        for(int i1=0;i1<n;i1++){
            diff[i1]=a[i1]-b[i1];
           // cout<<diff[i1]<<" ";
        }
        sort(diff.begin(),diff.end());
        for(int i1=0;i1<n;i1++){
            d1=lower_bound(diff.begin(),diff.end(),1-1*diff[i1])-diff.begin();
            ans+=n-1-d1;
            if(d1>i1){
                ans++;
            }
           // cout<<ans<<" "<<d1<<" "<<diff[i1]<<endl;
        }
        cout<<ans/2;
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