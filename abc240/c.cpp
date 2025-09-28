#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,Q;
	cin >> N >> Q ;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	vector<int> B(N);
	for(int i=0;i<N;i++){
		cin >> B[i];
	}
	long sum = 0;
	for(int i=0;i<N;i++){
		sum += std::min(A[i],B[i]);
	}
	for(int i=0;i<Q;i++){
		char c;
		cin >> c;
		int x,y;
		cin >> x >> y ;
		x -= 1;
		long prev = std::min(A[x],B[x]);
		if ( c == 'A' ) {
			A[x] = y;
		}
		else {
			B[x] = y;
		}
		long curr = std::min(A[x],B[x]);
		sum += ( curr - prev ) ;
		cout << sum << endl;
	}
	return 0;
}
