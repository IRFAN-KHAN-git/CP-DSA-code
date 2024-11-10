#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{	 int n;
	cin>>n;
	map<int, multiset<string>> mp;
	for (int i = 0; i < n; ++i)
	{
		/* code */
	
		
			int a;
			string x;
			cin>>x>>a;
			mp[-1*a].insert(x);
		}
	
		for(auto &it: mp){
			auto &irfan=it.second;
			int khan=it.first;
			for(auto &j: irfan)cout<<j<<" "<<-1*khan<<endl;
		}

}