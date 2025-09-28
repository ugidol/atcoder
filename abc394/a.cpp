#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	string ans = "";
	for(int i=0;i<(int)S.size();i++){
		if ( S[i] == '2' ){
			ans.push_back('2');
		}
	}
	cout << ans << endl;
	return 0;
}
