#include <bits/stdc++.h>
using namespace std;
void mod(long &v){
	v = v % 998244353;
}
int len(long v){
	string s = to_string(v);
	return (int)s.size();
}
long pow(long base, long exp){
	long v = 1;
	for(int i=0;i<exp;i++){
		v *= base;
	}
	return v;
}
int main(void){
	long N;
	cin >> N;
	long ans = 0;
	for(long i=0;i<N;i++){
		long v = N;
		v *= pow(10,i);
		ans += v;
	}
	cout << ans << endl;
	mod(ans);
	cout << ans << endl;
  return 0;
}
