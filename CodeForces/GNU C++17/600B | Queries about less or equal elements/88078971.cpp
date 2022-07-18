    /*WELCOME TO AYUSH RANJAN CODE'S*/
    /*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
 
    int chkpower2(int x){
        return (x&&!(x&x-1));
    }
 
 
    void solve(){
        int n,m,k,d1,d2,d3,ans=0;
        cin>>n>>m;
        vector<int> a(n),b(m);
        for(int i1=0;i1<n;i1++){
            cin>>a[i1];
        }
        for(int i1=0;i1<m;i1++){
            cin>>b[i1];
        }
        sort(a.begin(),a.end());
        //a.push_back(a[a.size()-1]+1);
        //sort(b.begin(),b.end());
        for(int i1=0;i1<m;i1++){
            cout<<upper_bound(a.begin(),a.end(),b[i1])-a.begin()<<" ";
        }
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