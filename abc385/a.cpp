#include <bits/stdc++.h>
using namespace std;
int main(void){
	int A,B,C;
	cin >> A >> B >> C ;
	string ans = "No";
	if ( ( A == B ) && ( B == C ) ) {
		ans = "Yes";
	}
	if ( ( ( A + B ) == C ) || 
		   ( ( A + C ) == B ) ||
			 ( ( B + C ) == A ) ) {
		ans = "Yes";
	}
	cout << ans << endl;

	return 0;
}
