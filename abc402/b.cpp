#include <bits/stdc++.h>
using namespace std;
int main(void){
	int Q;
	cin >> Q;
	queue<int> que;
	for(int i=0;i<Q;i++){
		int v;
		cin >> v ;
		if ( v == 1 ) {
			int x;
			cin >> x;
			que.push(x);
		}
		else {
			int a = que.front();
			que.pop();
			cout << a << endl;
		}
	}
	return 0;
}
