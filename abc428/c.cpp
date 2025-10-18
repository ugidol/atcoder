#include <bits/stdc++.h>
using namespace std;
int main(void){
	#ifdef DEBUG
	freopen("c.in.1","r",stdin);
	#endif
	int Q;
	cin >> Q;
	stack<int> opn;
	stack<int> cls;
	stack<int> stk;
	opn.push(0);
	cls.push(0);
	for(int i=0;i<Q;i++){
		int q;
		cin >> q;
		if ( q == 1 ) {
			char c;
			cin >> c;
			if ( c == '('){
				opn.push(i+1);
				stk.push(i+1);
			}
			else {
				cls.push(i+1);
				if ( ! stk.empty() ) {
					stk.pop();
				}
			}
		}
		else {
			if ( opn.top() > cls.top() ) {
				opn.pop();
			}
			else {
				cls.pop();
			}
		}
		#ifdef DEBUG
		fprintf(stderr,"[%d][%d]\n",opn.top(),cls.top());
		#endif
		if ( opn.size() == cls.size() && stk.size() == 0 ) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}
