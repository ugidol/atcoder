#include <bits/stdc++.h>
using namespace std;
int main(void){
	int A,B,C;
	cin >> A >> B >> C;
	string ans = "No";
	if ( std::pow(A,2) + std::pow(B,2) < std::pow(C,2) ) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}
