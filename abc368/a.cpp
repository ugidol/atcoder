#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K ;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	for(int i=0;i<N;i++){
		int idx = ((N-K)+i)%N;
		cout << A[idx] << ' ';
	}
	cout << endl;
	return 0;
}
