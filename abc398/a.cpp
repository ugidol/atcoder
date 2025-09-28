#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	string s(N,'=');
	for(int i=0;i<((N-1)/2);i++){
		s[i] = '-';
		s[(N-1)-i] = '-';
	}
	cout << s << endl;
	return 0;
}
