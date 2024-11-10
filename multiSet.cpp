#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		multiset<ll> s;
		ll sum=0;
		for (int i = 0; i < n; ++i)
		{
			ll x;
			cin>>x;
			s.insert(x);
		}
		for (int i = 0; i < m; ++i)
		{
			auto l= --s.end();
			ll value=*l;
			sum+=value;
			s.erase(l);
			s.insert(value/2);
		}
		cout<<sum<<endl;
	}
}