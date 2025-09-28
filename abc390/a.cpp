#include <bits/stdc++.h>
using namespace std;
int main(void){
	vector<int> A(5);
	for(int i=0;i<5;i++){
		cin >> A[i];
	}
	vector<int> B = A;
	sort(B.begin(), B.end());
	vector<bool> C(5,false);
	int num = 0;
	for(int i=0;i<5;i++){
		if ( A[i] != B[i] ) {
			num += 1;
			C[i] = true;
		}
	}
	if ( num != 2 ) {
		cout << "No" << endl;
		return 0;
	}
	for(int i=1;i<5;i++){
		if ( C[i-1] == true && C[i] == true ) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
