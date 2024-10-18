#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> A(N);
	vector<int> B(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
		B[i] = A[i];
	}
	sort(B.begin(),B.end(),std::greater<int>());
	int v = B[1];
	auto itr = std::find(A.begin(), A.end(), v);
	cout << std::distance(A.begin(), itr) + 1 << endl;
	return 0;
}
