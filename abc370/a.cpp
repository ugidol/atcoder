#include <bits/stdc++.h>
using namespace std;
int main(void){
	int L,R;
	cin >> L >> R ;
	int v = ( L << 1 ) | R ;
	string ans ;
	switch(v){
		case 1:
			ans = "No";
			break;
		case 2:
			ans = "Yes";
			break;
		default:
			ans = "Invalid";
			break;
	}
	cout << ans << endl;
	return 0;
}
