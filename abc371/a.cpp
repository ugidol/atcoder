
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char AB,AC,BC;
	cin >> AB >> AC >> BC ;
	string ans = "";
	if ( AB == '<' ) {
		if ( AC == '<' ) {
			if ( BC == '<' ) {
				ans = "B";
			}
			else {
				ans = "C";
			}
		}
		else {
			ans = "A";
		}
	}
	else {
		if ( AC == '<' ) {
			ans = "A";
		}
		else {
			if ( BC == '<' ) {
				ans = "C";
			}
			else {
				ans = "B";
			}
		}
	}
	cout << ans << endl;
	return 0;
}
