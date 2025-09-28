#include <bits/stdc++.h>
using namespace std;
int main(void){
	int A,B;
	cin >> A >> B;
	vector<int> vec(4,0);
	vec[A] = 1;
	vec[B] = 1;
	int c = 0;
	int ans = -1;
	for(int i=1;i<=3;i++){
		if ( vec[i] == 0 ) {
			ans = i;
			c += 1;
		}
	}
	if ( c == 1 ) {
		cout << ans << endl;
	}
	else {
		cout << -1 << endl;
	}
  return 0;
}
