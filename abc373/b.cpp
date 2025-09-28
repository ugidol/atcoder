#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	int ans = 0;
	int pos = S.find('A');
	for(char c='B';c<='Z';c++){
		int sz = S.find(c);
		ans += std::abs(pos-sz);
		pos = sz;
	}
	cout << ans << endl;
	return 0;
}
