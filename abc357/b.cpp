#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	int upper = 0;
	int lower = 0;
	for(int i=0;i<(int)S.size();i++){
		char c = S[i];
		if ( c >= 'a' && c <='z' ) {
			lower += 1 ;
		}
		else {
			upper += 1;
		}
	}
	string ans(S.size(),' ');
	if ( upper > lower ) {
		// l -> u ;
		for(int i=0;i<(int)S.size();i++){
			char c = S[i];
			if ( c >= 'a' && c <='z' ) {
				c = c + ( 'A' - 'a' );
			}
			ans[i] = c;
		}
	}
	else {
		// u -> l
		for(int i=0;i<(int)S.size();i++){
			char c = S[i];
			if ( c >= 'A' && c <='Z' ) {
				c = c + ( 'a' - 'A' );
			}
			ans[i] = c;
		}
	}
	cout << ans << endl;
  return 0;
}
