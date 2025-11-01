#include <bits/stdc++.h>
using namespace std;
int main(void){
	int A,B,C,D;
	cin >> A >> B >> C >> D;
	string ans = "No";
	if ( C >= A ) {
		if ( D < B ) {
			ans = "Yes";
		}
	}
	cout << ans << endl;
	return 0;
}
