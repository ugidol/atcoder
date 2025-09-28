#include <bits/stdc++.h>
using namespace std;
int main(void){
	int ans = 0;
	for(int i=1;i<=12;i++){
		string s;
		cin >> s;
		if ( s.size() == i ) {
			ans += 1;
		}
	}
	cout << ans << endl;
	return 0;
}
