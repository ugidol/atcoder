#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<long> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	long ans = 0;
	map<long,long> mp;
	mp[ A[0] + 1 ] += 1;
	for(int j=1;j<N;j++){
		long key = (j+1) - A[j];
		ans += mp[key];
		mp[ A[j] + (j+1) ] += 1;
	}
	cout << ans << endl;
	return 0;
}
