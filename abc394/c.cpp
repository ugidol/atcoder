#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	S.push_back(' ');
	int left = 0;
	int right = 0;
	string ans ;
	while( left < (int)(S.size()-1) ) {
		if ( S[left] != 'W' ) {
			ans.push_back(S[left]);
			//
			left += 1;
			right = left;
			continue;
		}
		//
		right = left;
		while(S[right]=='W'){
			right += 1;
		}
		if ( S[right] == 'A' ) {
			ans.push_back('A');
			for(int i=0;i<(right-left);i++){
				ans.push_back('C');
			}
		}
		else {
			for(int i=0;i<(right-left);i++){
				ans.push_back('W');
			}
			ans.push_back(S[right]);
		}
		left = right+1;
		right = left;
	}
	if ( ans[ ans.size() - 1 ] == ' ' ) {
		ans.pop_back();
	}
#ifdef DEBUG
	cerr << '[' << ans << ']' << endl;
#endif
	cout << ans << endl;
	return 0;
}
