#include <bits/stdc++.h>
using namespace std;
bool ff(long a, long b, long c, long d){
	double aa = a;
	double bb = b + 0.5;
	double cc = c;
	double dd = d + 0.5;
	return ( std::max(aa,cc) <= std::min(dd,bb) );
}
int main(void){
	int N;
	cin >> N;
	long X,Y;
	cin >> X >> Y;
	function<pair<long,long>(long)> f = [&](long v){
		long mn = X * v ;
		long mx = Y * v ;
		pair<long,long> p = make_pair(mn,mx);
		return p;
	};
	vector<long> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	std::sort(A.begin(), A.end());
	pair<long,long>  p1 = f(A[0]);
	for(int i=1;i<A.size();i++){
		pair<long,long> p2 = f(A[i]);
		if ( ! ff(p1.first, p1.second, p2.first, p2.second) ) {
			cout << -1 << endl;
			return 0;
		}
	}
	function<long(long,long)> bs = [&](long num,long v){
		long left = 0;
		long right = num+1;
		while(left<right){
			long mid = (left + right) / 2;
			if ( ( ( X * ( num - mid ) ) + ( Y * mid ) ) < v ) {
				left = mid + 1;
			}
			else {
				right = mid;
			}
		}
		return left;
	};
	long ans = p1.second / Y ;
	long v = p1.second;
	#ifdef DEBUG
	fprintf(stderr,"[%ld]\n",ans);
	#endif
	for(int i=1;i<A.size();i++){
		long tmp = bs(A[i],v);
		if ( ( ( X * (A[i] - tmp) ) + ( Y * tmp ) ) != v ) {
			cout << -1 << endl;
			return 0;
		}
		ans += tmp;
		#ifdef DEBUG
		fprintf(stderr,"[%ld]\n",ans);
		#endif
	}
	cout << ans << endl;
	return 0;
}