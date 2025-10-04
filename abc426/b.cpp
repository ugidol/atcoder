#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	map<char,int> mp;
	for(int i=0;i<(int)S.size();i++){
		char c = S[i];
		mp[c] += 1;
	}
	char ans = ' ' ;
	for(auto itr:mp){
		if ( itr.second == 1 ) {
			ans = itr.first;
		}
	}
	cout << ans << endl;
	return 0;
}
