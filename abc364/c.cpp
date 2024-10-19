#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N;
	cin >> N;
	long X,Y;
	cin >> X >> Y ;
	vector<long> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	vector<long> B(N);
	for(int i=0;i<N;i++){
		cin >> B[i];
	}
	function<long(vector<long>&,long)> f = [N](vector<long> &vec, long th){
		std::sort(vec.begin(), vec.end(), std::greater<long>());
		long sum = 0;
		for(int i=0;i<N;i++){
			sum += vec[i];
			if ( sum > th ) {
				return (long)i+1;
			}
		}
		return (long)vec.size();
	};
	long numA = f(A,X);
	long numB = f(B,Y);
	long ans = std::min(numA,numB);
	cout << ans << endl;
	return 0;
}
