#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S,T;
	cin >> S >> T ;
	size_t len = std::min(S.size(),T.size());
	int ans = 0;
	for(int i=0;i<len;i++){
		if ( S[i] != T[i] ) {
			ans = i+1;
			break;
		}
	}
	if ( ans == 0 && S != T ) {
		ans = len + 1;
	}
	cout << ans << endl;
	return 0;
}
