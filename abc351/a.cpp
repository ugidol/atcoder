#include <bits/stdc++.h>
using namespace std;
int main(void){
	vector<int> A(9);
	int aa = 0;;
	for(auto &itr:A){
		cin >> itr;
		aa += itr;
	}
	vector<int> B(8);
	int bb = 0;
	for(auto &itr:B){
		cin >> itr;
		bb += itr;
	}
	int ans = 0;
	if ( aa < bb ) {
		;
	}
	else {
		ans = aa - bb + 1;
	}
	cout << ans << endl;
  return 0;
}
