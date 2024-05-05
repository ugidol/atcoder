#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S,T;
	cin >> S >> T;
	int i=0;
	int idx=0;
	while(i<(int)S.size()){
		char c = S[i];
		while(T[idx] != c ) {
			idx += 1;
		}
		cout << idx + 1 << ' ' ;
		i += 1;
		idx += 1;
	}
	cout << endl;
  return 0;
}
