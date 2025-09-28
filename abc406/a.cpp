#include <bits/stdc++.h>
using namespace std;
int main(void){
	string ans = "Yes";
	int A,B,C,D;
	cin >> A >> B >> C >> D ;
	if ( C > A ) {
		ans = "No";
	}
	else {
		if ( C == A ) {
			if ( D > B ) {
				ans = "No";
			}
		}
	}
	cout << ans << endl;
	return 0;
}
