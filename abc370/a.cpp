#include <bits/stdc++.h>
using namespace std;
int main(void){
	int L,R;
	cin >> L >> R ;
	string ans = "Invalid";
	if ( L == 1 && R == 0 ) {
		ans = "Yes";
	}
	else if ( L == 0 && R == 1 ) {
		ans = "No";
	}
	cout << ans << endl;
  return 0;
}
