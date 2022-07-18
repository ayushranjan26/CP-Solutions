#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long sum1=0,n;
    cin>>n;
    map<long long,long long> m1;
    for(long long i1=0;i1<n;i1++){
        long long d1;
        cin>>d1;
        sum1+=d1;
        if(m1.find(d1)==m1.end()){
            m1.insert(make_pair(d1,1));
        }
        else{
            m1[d1]++;
        }
    }
    long long q;
    cin>>q;
    for(long long i1=0;i1<q;i1++){
        long long bi,ci;
        cin>>bi>>ci;
        //cout<<sum1<<" ";
        sum1=sum1-m1[bi]*bi;
        //cout<<sum1<<" ";
        //cout<<m1[bi]<<"---"<<m1[ci]<<" ";
        m1[ci]=m1[ci]+m1[bi];
        sum1+=ci*m1[bi];
        m1[bi]=0;
        cout<<sum1<<"\n";
    }
    return 0;
}
