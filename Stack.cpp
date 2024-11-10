#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	stack<string> s;
	s.push("hi");
	s.push("hello");
	s.push("konichiwa");
	s.push("Aniuoo");
	while(!s.empty()){
		cout<< s.top() <<endl;
		s.pop();
	}
	
	cout<<"**********"<<endl;
	
	queue<string> q;
	q.push("hi");
	q.push("hello");
	q.push("konichiwa");
	q.push("Aniuoo");
	while(!q.empty()){
		cout<< q.front() <<endl;
		q.pop();
	}
	
}