#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int  n;
	cin>>n;
	int a[n];
	for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
	}
	int k;
	cin>>k;
	int i=0;
	int j=0;
	long long sum=0,maxi=0;
	while(j<n){
		sum=sum+a[j];
		if(j-i + 1 < k){
			j++;
		}
		else if(j-i + 1 == k){
			maxi=max(maxi,sum);
			sum=sum-a[i];
			j++;i++;
		}
	}
	cout<<maxi;
}