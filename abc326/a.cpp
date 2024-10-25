#include <bits/stdc++.h>
using namespace std;
int main(void){
	int X,Y;
	cin >> X >> Y;
	string ans = "Yes";
	if ( Y - X > 2 || X - Y > 3 ) {
		ans = "No";
	}
	cout << ans << endl ;
	return 0;
}
