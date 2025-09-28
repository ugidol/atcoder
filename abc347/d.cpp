#include <bits/stdc++.h>
using namespace std;
const long LEN=60;
int main(void){
	long a,b,C;
	cin >> a >> b >> C;
	bool swapped = false;
	if ( a > b ) {
		swap(a,b);
		swapped = true;
	}
	// Cを2進数文字列に変換
	function<string(long)> f = [&](long v){
		string s(LEN,'0');
		int i=0;
		while(v>0&&i<(int)s.size()){
			long m = v % 2;
			s[s.size()-1-i] = '0'+m;
			v /= 2;
			i += 1;
		}
		return s;
	};
	// 2人数文字列を数値に変換
	function<long(string)> ff = [&](string s){
		long v = 0;
		for(size_t i=0;i<s.size();i++){
			v *= 2;
			char c = s[i];
			v += (c-'0');
		}
		return v;
	};
	string s = f(C);
	long c = count(s.begin(), s.end(), '1');
	for(long i=0;i<=a;i++){
		long d = i;
		long a2 = a - d;
		long b2 = b - d;
		if ( a2 + b2 == c ) {
#ifdef DEBUG
			fprintf(stderr,"i=%ld\n",i);
#endif
			string sa(LEN,'0');
			string sb(LEN,'0');
			for(long j=LEN-1;j>=0;j--){
				if ( s[j] == '1' ) {
					if ( a2 > 0 ) {
						sa[j] = '1';
						a2 -= 1;
					}
					else if ( b2 > 0 ) {
						sb[j] = '1';
						b2 -= 1;
					}
				}
				else {
					if ( d > 0 ) {
						sa[j] = '1';
						sb[j] = '1';
						d -= 1;
					}
				}
			}
			if ( d > 0 ) {
				continue;
			}
#ifdef DEBUG
			fprintf(stderr,"a2=%ld\n",a2);
			fprintf(stderr,"b2=%ld\n",b2);
			fprintf(stderr,"d=%ld\n",d);
			cout << "sa:" << sa << endl;
			cout << "sb:" << sb << endl;
			cout << "s :" << s  << endl;
#endif
			long X = ff(sa);
			long Y = ff(sb);
			long Z = ff(s);
			if ( swapped ) {
				swap(X,Y);
			}
			cout << X << ' ' << Y << endl;
			return 0;
#ifdef DEBUG
			cout << "X:" << X << endl;
			cout << "Y:" << Y << endl;
			cout << "Z:" << Z << endl;
#endif
		}
	}
	cout << -1 << endl;
  return 0;
}
