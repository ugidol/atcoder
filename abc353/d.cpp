#include <bits/stdc++.h>
using namespace std;
const long M = 998244353;
long f(long a, long b, long c){
	long v = a;
	for(long i=0;i<b;i++){
		v *= 10;
		v %= M;
	}
	v *= c;
	v %= M;
	return v;
}
int main(void){
	int N;
	cin >> N;
	vector<long> A(N);
	vector<long> B(N);
	map<long,long> mp;
	for(int i=0;i<N;i++){
		cin >> A[i];
		if ( i == 0 ) {
			B[i] = A[i];
		}
		else {
			B[i] = B[i-1] + A[i];
		}
		long k = to_string(A[i]).size();
		mp[k] += 1;
	}
	//
	long ans = 0;
	for(int i=0;i<N;i++){
		long k = to_string(A[i]).size();
		mp[k] -= 1;
		long x = 0;
		for(auto itr:mp){
			x += f(A[i],itr.first,itr.second);
			x = x % M;
		}
		long y = B[N-1] - B[i];
		y = y % M;
		ans += ( x + y ) ;
		ans = ans % M ;
	}
	cout << ans << endl;
  return 0;
}
