#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	int Q;
	cin >> Q;
	for(int i=0;i<Q;i++){
		long long K;
		cin >> K;
		K -= 1;
		unsigned int len = S.size();
		char c = S[ K % len ];
		//
		long long left = 0;
		long long right = 1LL<<60;
		K /= len;
		int cnt = 0;
		while(left+1<right){
			long long mid = ( left + right ) / 2;
#ifdef DEBUG
			fprintf(stderr,"{%lld,%lld,%lld}\n",left,mid,right);
#endif
			if ( K < mid ) {
				right = mid;
			}
			else {
				left = mid;
				cnt += 1;
			}
		}
		if ( cnt % 2 == 1 ) {
			if ( islower(c) ) {
				c = toupper(c);
			}
			else {
				c = tolower(c);
			}
		}
		cout << c << ' ';
	}
	cout << endl;
	return 0;
}
