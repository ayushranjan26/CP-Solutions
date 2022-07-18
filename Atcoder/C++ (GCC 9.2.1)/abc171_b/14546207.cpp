#include <iostream>

using namespace std;

int main()
{
long long a,b,c,k;
cin>>a>>b>>c>>k;
long long ans=0;
if(k<=a){
    ans=k;
}
if(k>a&&k<=a+b){
    ans=a;
}
if(k>a+b){
    ans=a-(k-a-b);
}
cout<<ans;
    return 0;
}
