#include <bits/stdc++.h>
using namespace std;
int main(void){
	int S;
	cin >> S;
	string ans = "Failure";
	if ( S >= 200 && S <= 299 ) {
		ans = "Success";
	}
	cout << ans << endl;
	return 0;
}
