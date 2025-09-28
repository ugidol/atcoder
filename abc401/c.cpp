#include <bits/stdc++.h>
using namespace std;

int main(void){
	long long N,K;
	cin >> N >> K ;
	if ( K > N ) {
		cout << 1 << endl;
		return 0; 
	}
	vector<long long> vec(N+1,1);
	long long sum = K;
	for(long long i=K;i<=N;i++){
		vec[i] = sum;
		sum += vec[i];
		sum %= 1000000000 ;
		sum -= vec[i-K];
		sum %= 1000000000 ;
	}
	cout << vec[N] << endl;
	return 0;
}
