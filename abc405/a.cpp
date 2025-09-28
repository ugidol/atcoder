#include <bits/stdc++.h>
using namespace std;
int main(void){
	int R,X;
	cin >> R >> X;
	string ans = "No";
	if ( X == 1 ) {
		if ( R >= 1600 && R <= 2999 ) {
			ans = "Yes";
		}
	}
	if ( X == 2 ) {
		if ( R >= 1200 && R <= 2399 ) {
			ans = "Yes";
		}
	}
	cout << ans << endl;
	return 0;
}
