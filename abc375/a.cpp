#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	string S;
	cin >> S;
	int ans = 0;
	for(int i=1;i<=N-2;i++){
		int idx = i-1;
		if ( S[idx]=='#' && S[idx+2]=='#' && S[idx+1]=='.' ) {
			ans += 1;
		}
	}
	cout << ans << endl;
	return 0;
}
