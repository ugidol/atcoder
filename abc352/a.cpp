#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,X,Y,Z;
	cin >> N >> X >> Y >> Z ;
	string ans = "No";
	if ( X > Y ) {
		swap(X,Y);
	}
	if ( X <= Z && Z <= Y ) {
		ans = "Yes";
	}
	cout << ans << endl;
  return 0;
}
