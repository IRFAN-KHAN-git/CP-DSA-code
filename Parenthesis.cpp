#include <bits/stdc++.h>
using namespace std;
#define ll long long
		unordoered_map<char,int> mp=({'(',-1},{'[',-2},{'{',-3},{')',1},{']',2},{'}',3});
		string isBalanced(string s) {
			stack<char> stk;
			for( char c : s){
				if(mp[c]<0){
					stk.push(c);
				}
				else{
					if(stk.empty())return "NO";
					char top =stk.top();
					stk.pop();
					if(mp[top]+mp[c]!=0)return "NO";

				}
			}
			if(stk.empty())return "YES";
			return "NO";
		}
