#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;

	set<char> opn = {'(','[','<'};

	map<char,char> mp;
	mp['('] = ')';
	mp['['] = ']';
	mp['<'] = '>';

	string ans = "Yes";
	stack<char> stk;
	for(int i=0;i<(int)S.size();i++){
		char c = S[i];
		// 開き括弧ならスタックにpushしてcontinue;
		if ( opn.count(c) > 0 ) {
			stk.push(c);
			continue;
		}
		// 閉じ括弧なのに既にスタックが空ならNo;
		if ( stk.empty() ) {
			ans = "No";
			break;
		}
		// スタックの一番上にいるのが対応する括弧なら良し
		char cc = stk.top();
		if ( c == mp[cc] ) {
			stk.pop();
			continue;
		}
		// そうでないなら括弧の対応関係がとれていないので良くない
		ans = "No";
		break;
	}
	if ( stk.size() > 0 ) {
		ans = "No";
	}
	cout << ans << endl;
	return 0;
}
