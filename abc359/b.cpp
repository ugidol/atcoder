#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> A(2*N);
	for(int i=0;i<2*N;i++){
		cin >> A[i];
	}
	int ans = 0;
	for(int i=1;i<=N;i++){
		vector<int> tmp;
		for(int j=0;j<2*N;j++){
			if ( A[j] == i ) {
				tmp.push_back(j);
			}
		}
		if ( tmp[1] - tmp[0] == 2 ) {
			ans += 1;
		}
	}
	cout << ans << endl;
  return 0;
}
