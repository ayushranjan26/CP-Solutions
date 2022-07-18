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
        int n;
        cin>>n;
        int arr[n];
        for(int i1=0;i1<n;i1++){
            cin>>arr[i1];
        }
        vector<int> v1;
        for(int i1=0;i1<n;i1++){
            for(int i2=0;i2<arr[i1];i2++){
                v1.push_back(i1+1);
                //cout<<i1+1<<" ";
            }
        }
        int m;
        cin>>m;
        int q[m];
        for(int i1=0;i1<m;i1++){
            cin>>q[i1];
        }
        for(int i1=0;i1<m;i1++){
            cout<<v1[q[i1]-1]<<"\n";
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