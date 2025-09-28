#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> P(N);
	vector<int> A(N);
	vector<int> B(N);
	for(int i=0;i<N;i++){
		cin >> P[i] >> A[i] >> B[i];
	}
	int Q;
	cin >> Q;
	for(int i=0;i<Q;i++){
		int x;
		cin >> x;
		for(int i=0;i<N;i++){
			if ( x <= P[i] ) {
				x += A[i];
			}
			else {
				x = std::max(0,x-B[i]);
			}
		}
		cout << x << endl;
	}
	return 0;
}
