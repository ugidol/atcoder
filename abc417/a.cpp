#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,A,B;
	cin >> N >> A >> B;
	string S;
	cin >> S;
	string ans = "";
	for(int i=0;i<(N-A-B);i++){
		ans.push_back(S[i+A]);
	}
	cout << ans << endl;
	return 0;
}
