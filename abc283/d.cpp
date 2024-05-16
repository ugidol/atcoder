#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	stack<set<char>> stk;
	{
		set<char> st;
		stk.push(st);
	}
	set<char> box;
	string ans = "Yes";
	for(int i=0;i<(int)S.size();i++){
		char c = S[i];
		if ( c == '(' ) {
			set<char> st;
			stk.push(st);
		}
		else if ( c == ')' ) {
			set<char> st = stk.top();
			for(auto itr:st){
				box.erase(itr);
			}
			stk.pop();
		}
		else {
			set<char> &st = stk.top();
			st.insert(c);
			if ( box.count(c) > 0 ) {
				ans = "No";
				break;
			}
			else {
				box.insert(c);
			}
		}
	}
	cout << ans << endl;
  return 0;
}
