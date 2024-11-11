/* For the input array [4, 5, 2, 25}, the next greater elements for each element are as follows.

Element --> NGE

4 --> 5

5 --> 25

2 --> 25

25 --> -1 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int > NGE(vector<int> v ){

		stack<int> s;
		std::vector<int> nge(v.size());
		for (int i = 0; i < v.size(); ++i)
		{
			while(!s.empty() &&  v[i] > v[s.top()]) {
				nge[s.top()]=i;
				s.pop();
			}
			s.push(i);
		}
		while(!s.empty()){
			nge[s.top()]=-1;
			s.pop();
		}
		return nge; 	
}

int main()
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	vector<int> nge = NGE(v);
	for(int i=0;i<n;i++){

		cout<< v[i] <<" "<< (nge[i] == -1? -1 :v[nge[i]]) <<endl;
	}

}
