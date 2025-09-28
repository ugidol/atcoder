#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S,T;
	cin >> S >> T ;
	string ans = "No";
	if ( S == "AtCoder" && T == "Land" ) {
		ans = "Yes";
	}
	cout << ans << endl;
  return 0;
}
