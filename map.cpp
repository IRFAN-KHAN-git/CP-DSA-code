#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{	int n;
	cin>>n;
	map<string, int> m;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		m[s]++;
	}
	for(auto &it: m){
		cout<<it.first<<" "<<it.second<<endl;
	}
	
	
}