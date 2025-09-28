#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	string ans;
	for(int i=0;i<S.size();i++){
		char c = S[i];
		if ( c == '.' ) {
			continue;
		}
		ans.push_back(c);
	}
	cout << ans << endl;
	return 0;
}
