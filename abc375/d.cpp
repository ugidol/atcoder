#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	map<char,vector<int>> mp;
	for(char c='A';c<='Z';c++){
		mp[c].resize(S.size()+1);
	}
	for(int i=1;i<=S.size();i++){
		char s = S[i-1];
		for(char c='A';c<='Z';c++){
			mp[c][i] = mp[c][i-1];
		}
		mp[s][i] += 1;
	}
	long ans = 0;
	for(int i=2;i<=S.size()-1;i++){
		for(char c='A';c<='Z';c++){
			long left = mp[c][i-1] - mp[c][0];
			long right = mp[c][S.size()] - mp[c][i];
			ans += ( left * right );
		}
	}
	cout << ans << endl;
	return 0;
}
