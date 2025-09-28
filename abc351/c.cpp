#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	list<int> list;
	function<void(int)> f = [&](int v){
		if ( list.size() < 1 ) {
			list.push_back(v);
			return ;
		}
		if ( list.back() != v ) {
			list.push_back(v);
			return ;
		}
		list.pop_back();
		f(v+1);
	};
	for(int i=0;i<N;i++){
		int a;
		cin >> a;
		f(a);
	}
	cout << list.size() << endl;
  return 0;
}
