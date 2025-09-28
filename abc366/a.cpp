#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	int T,A;
	cin >> T >> A ;
	int X = N - ( T+A ) ;
	string ans = "No";
	if ( min(T,A) + X < max(T,A) ) {
		ans = "Yes";
	}
	cout << ans << endl;
  return 0;
}
