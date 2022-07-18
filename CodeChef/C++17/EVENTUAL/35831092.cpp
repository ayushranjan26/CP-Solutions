/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
//#define ll long long int
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}


void solve()
{
	int n;
	cin>>n;
	string s1;
	cin>>s1;
	if(n%2==1){
        cout<<"NO";
        return;
	}
	long long int a[26]={0};
	for(int i1=0;i1<n;i1++){
        int d1=s1[i1]-'a';
        a[d1]++;
	}
	for(int i1=0;i1<26;i1++){
        if(a[i1]%2==1){
            cout<<"NO";
            return;
        }
	}
	cout<<"YES";
	return;
}

int main()
{
   // ios::sync_with_stdio(0);
  //  cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}

