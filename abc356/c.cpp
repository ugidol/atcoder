#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M,K;
	cin >> N >> M >> K ;
	vector<vector<int>> A(M,vector<int>(N,0));
	vector<char> R(M,' ');
	for(int i=0;i<M;i++){
		int C;
		cin >> C;
		for(int j=0;j<C;j++){
			int a;
			cin >> a;
			A[i][a-1] = 1;
		}
		cin >> R[i];
	}
	//
	int ans = 0;
	int n = N;
	for(int bit=0; bit<(1<<n); ++bit){
		bool b = true;
		for(int i=0;i<M;i++){
			vector<int> &vec = A[i];
			int cnt = 0;
			for(int j=0;j<N;j++){
				if ( bit & (1<<j) && vec[N-j-1] == 1 ) {
					cnt += 1;
				}
			}
			if ( R[i] == 'o' && cnt >= K ) {
				;
			}
			else if ( R[i] == 'x' && cnt < K ) {
				;
			}
			else {
				b = false;
			}
		}
		if ( b ) {
#ifdef DEBUG
			fprintf(stderr,"%d\n",bit);
#endif
			ans += 1;
		}
	}
	cout << ans << endl;
  return 0;
}
