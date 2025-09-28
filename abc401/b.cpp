#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<string> S(N);
	for(int i=0;i<N;i++){
		cin >> S[i];
	}
	int ans = 0;
	bool login = false;
	for(int i=0;i<N;i++){
		if ( S[i] == "login" ) {
			login = true;
		}
		if ( S[i] == "logout" ) {
			login = false;
		}
		if ( S[i] == "public" ) {
			;
		}
		if ( S[i] == "private" ) {
			if ( ! login ) {
				ans += 1;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
