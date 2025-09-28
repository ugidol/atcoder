#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	std::sort(S.begin(), S.end());
	string ans = "No";
	if ( S == "ABC" ) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}
