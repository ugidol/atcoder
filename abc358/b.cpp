#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,A;
	cin >> N >> A;
	vector<int> T(N);
	for(int i=0;i<N;i++){
		cin >> T[i];
	}
	int ans = 0;
	for(int i=0;i<N;i++){
		ans = max(ans+A,T[i]+A);
		cout << ans << endl;
	}
  return 0;
}
