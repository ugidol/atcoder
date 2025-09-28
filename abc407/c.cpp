#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	vector<char> vec(10,'0');
	for(int i=0;i<10;i++){
		vec[i] = vec[i] + i;
	}
	size_t len = S.size();
	long ans = 0;
	while(S.size()>0){
		int idx = S.size() - 1 ;
		S[idx] = vec[( ( S[idx] - '0' ) + 10 - ( ans % 10 ) ) % 10 ];
		int v = S[idx] - '0' ;
		ans += v;
		S.pop_back();
	}
	cout << ans + len << endl;
	return 0;
}
