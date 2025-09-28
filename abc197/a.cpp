#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	string ans(3,' ');
	for(int i=0;i<3;i++){
		ans[(i+2)%3] = S[i];
	}
	cout << ans << endl;
	return 0;
}
