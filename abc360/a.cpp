#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	string ans = "No";
	if ( S.find("R") < S.find("M") ) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}
