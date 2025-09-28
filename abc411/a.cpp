#include <bits/stdc++.h>
using namespace std;
int main(void){
	string P;
	cin >> P;
	int L;
	cin >> L;
	string ans = "Yes";
	if ( P.size() < L ) {
		ans = "No";
	}
	cout << ans << endl;
	return 0;
}
