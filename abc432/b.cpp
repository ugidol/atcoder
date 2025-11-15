#include <bits/stdc++.h>
using namespace std;
int main(void){
	int X;
	cin >> X;
	function<int(string)> f = [&](string s){
		int v = 0;
		for(int i=0;i<(int)s.size();i++){
			v *= 10;
			v += s[i] - '0' ;
		}
		return v;
	};
	string str;
	while(X>0){
		char c = '0' + (char)( X % 10 );
		str.push_back(c);
		X /= 10;
	}
	int ans = 100000;
	sort(str.begin(), str.end());
	do {
		if ( str[0] == '0' ) {
			continue;
		}
		int v = f(str);
		ans = std::min(ans,v);
	}
	while(next_permutation(str.begin(), str.end()));
	cout << ans << endl;
	return 0;
}
