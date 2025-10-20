#include <bits/stdc++.h>
using namespace std;
int main(void){
	#ifdef DEBUG
	freopen("c.in.1","r",stdin);
	#endif
	int Q;
	cin >> Q;
	stack<int> A;
	stack<int> B;
	A.push(0);
	B.push(0);
	for(int i=0;i<Q;i++){
		int a;
		cin >> a;
		if ( a == 1 ) {
			char c ;
			cin >> c;
			int v = c == '(' ? +1 : -1 ;
			A.push( A.top() + v  );
			int mn = std::min(B.top(),A.top());
			B.push( mn ) ;
		}
		else {
			A.pop();
			B.pop();
		}
		string ans = "No";
		if ( A.top() == 0 && B.top() == 0 ) {
			ans = "Yes";
		}
		cout <<ans << endl;
	}
	return 0;
}
