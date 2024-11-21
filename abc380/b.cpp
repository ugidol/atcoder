#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	vector<int> vec;
	int len = 0;
	for(int i=1;i<(int)S.size();i++){
		char c = S[i];
		if ( c == '|' ) {
			vec.push_back(len);
			len = 0;
			continue;
		}
		len += 1;
	}
	for(auto itr:vec){
		cout << itr << ' ';
	}
	cout << endl;
	return 0;
}
