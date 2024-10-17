#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	string ans = "No";
	size_t pos = S.size() - 3;
	size_t n = 3;
	string s = S.substr(pos,n);
	if ( s == "san" ) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}
