#include <bits/stdc++.h>
using namespace std;
int main(void){
	int A,B,C;
	cin >> A >> B >> C ;
	if ( C < B ) {
		C += 24 ;
	}
	string ans = "Yes";
	if ( B < A && A < C ) {
		ans = "No";
	}
	else {
		A += 24;
		if ( B < A && A < C ) {
			ans = "No";
		}
	}
	cout << ans << endl;
  return 0;
}
