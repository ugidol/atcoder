#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<double> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	double r = A[1] / A[0];
	bool b = true;
	for(int i=2;i<N;i++){
		if ( A[i-1] * r != A[i] ) {
			b = false;
			break;
		}
	}
	//
	if ( b ) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}
