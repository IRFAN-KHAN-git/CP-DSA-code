#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		int hash[26]={0};
		cin>>n>>m;
		string s1,s2;
		cin>>s1>>s2;
		for (int i = 0; i < n; ++i)
		{
			hash[s1[i]-'a']++;
		}
		
		for (int j = 0; j < m; ++j)
		{
			hash[s2[j]-'a']++;
		}
		sort(hash,hash+26);
		if(hash[0]==0){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}

	}			
	

	
}
