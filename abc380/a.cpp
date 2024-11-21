#include <bits/stdc++.h>
using namespace std;
int main(void){
	string N;
	cin >> N;
	map<char,int> mp;
	for(int i=0;i<6;i++){
		char c = N[i];
		mp[c] += 1;
	}
	string ans = "No";
	if ( mp['1'] == 1 && mp['2'] == 2 && mp['3'] == 3 ) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}
