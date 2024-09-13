#include <bits/stdc++.h>
using namespace std;
int main(void){
	string X;
	cin >> X;
	int left = 0;
	int right = (int)X.size();
	while(right>0){
		char c = X[right-1];
		if ( c == '0' ) {
			right -= 1;
			continue;
		}
		if ( c == '.' ) {
			right -= 1;
		}
		break;
	}
	string ans = X.substr(left,right);
	cout << ans << endl;
  return 0;
}
