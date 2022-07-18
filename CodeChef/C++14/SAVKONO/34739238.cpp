/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE LARGE*/

#include <bits/stdc++.h>
using namespace std;
int chkpower2(int x){
    return (x&&!(x&x-1));
}
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        int n,z;
        cin>>n>>z;
        priority_queue<int> pq;
        for(int i1=0;i1<n;i1++){
            int d1;
            cin>>d1;
            pq.push(d1);
        }
        int sum=0,ans=0,d1;
        while(pq.top()){
            sum+=pq.top();
            d1=pq.top()/2;
            pq.pop();
            pq.push(d1);
            ans++;
            if(sum>=z){
                break;
            }
        }
        if(sum<z){
            cout<<"Evacuate";
        }
        else{
            cout<<ans;
        }
        cout<<"\n";
    }
    return 0;
}
