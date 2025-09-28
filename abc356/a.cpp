#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,L,R;
	cin >> N >> L >> R ;
	for(int i=1;i<=N;i++){
		int n = i;
		if ( i >= L && i <= R ) {
			n = R  - ( i - L );
		}
		cout << n << ' ';
	}
	cout << endl;
  return 0;
}
