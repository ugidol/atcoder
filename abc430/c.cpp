#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,A,B;
	cin >> N >> A >> B;
	string S;
	cin >> S;
	vector<int> sumA(N+1);
	vector<int> sumB(N+1);
	for(int i=0;i<N;i++){
		if ( S[i] == 'a' ){
			sumA[i+1] = sumA[i] + 1;
			sumB[i+1] = sumB[i] ;
		}
		else {
			sumA[i+1] = sumA[i] ;
			sumB[i+1] = sumB[i] + 1;
		}
	}
	long ans = 0;
	int left = 0;
	int right = left + 1;
	function<bool(int,int)> f = [&](int l,int r){
		return ((sumA[r+1] - sumA[l] >= A) && (sumB[r+1]-sumB[l]<B));
	};
	while(left<N&&right<=N){
		while ( sumA[right+1] - sumA[left] < A ) {
			right += 1;
		}
		while ( right <= N && sumB[right+1] - sumB[left] >= B ) {
			left += 1;
		}
		while( f(left,right) ) {
			#ifdef DEBUG
			fprintf(stderr,"%d,%d\n",left+1,right+1);
			#endif
			ans += 1;
			right += 1;
		}
	}
	cout << ans << endl;
	return 0;
}
